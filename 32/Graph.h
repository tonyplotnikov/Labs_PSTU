#pragma once
#include <glut.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>
using namespace std;
int WinW, WinH;
const int maxSize = 20;
int amountVerts, amountEdges, sourceVertex, targetVertex, edgeWeight;
bool del = false;

struct vertCoord
{
	int x, y;
};

struct Pair
{
	int first, second;
};

vertCoord vertC[100];

template <class T>
class Graph
{
	int adjMatrix[maxSize][maxSize] = { 0 };
	vector<T> vertList;
public:
	Graph();
	~Graph();
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	void InsertVertex(const T& vertex);
	void InsertEdge(const T& vertex1, const T& vertex2, int weight);
	void Print();
	void DrawGraph();
	void redstr(int** temp);
	void redstlb(int** temp);
	int nullstr(int** temp, int n, int check);
	int nullstlb(int** temp, int n, int check);
	Pair Solution(int** mod);
	void Salesman();
	void DeleteVertex();
	void DeleteEdge(const T& vertex1, const T& vertex2);
};

float offset = 0.0;
bool box_clicked = false;

class Button 
{
	float bx, by;
	float bc;
	float height, width;
	char button_name[100];

public:

	Button()
	{
		bc = 0;
		bx = 0;
		by = 0;
		width = 0;
		height = 0;
		strcpy_s(button_name, "");
	}

	Button(const char name[])
	{
		bc = 0;
		bx = 10;
		by = 650;
		width = 160;
		height = 40;
		strcpy_s(button_name, name);
	}

	void display_text(char s[], float x, float y)
	{
		glRasterPos2f(x, y);
		for (int i = 0; s[i]; i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
		glFlush();
	}

	void draw_button()
	{
		
		by += offset;
		bc = by;
		glColor3f(0.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(bx - 450, by - 805);
		glVertex2f(bx + width - 450, by - 805);
		glVertex2f(bx + width - 450, by + height - 805);
		glVertex2f(bx - 450, by + height - 805);
		glEnd();
		offset -= 60.0;
		glColor3f(1.0, 0.5, 0.0);
		display_text(button_name, bx - 440, by - 775.0);
	}

	bool clicked_button(int x, int y)
	{
		if (x - WinW / 2 + 450 > bx && x - WinW / 2 + 450 < bx + width)
			if (y + WinH / 2 + 105 > bc && y + WinH / 2 + 105 < bc + height)
			{
				box_clicked = true;
				return true;
			}
		return false;
	}
};

class Circles
{
public:
	float x, y, r, alpha;
	Circles(float _x = 0.0, float _y = 0.0, float _r = 10.0) :x(_x), y(_y), r(_r), alpha(1.0) {};
	void draw();
};

void Circles::draw()
{
	glColor4f(1.0, 1.0, 1.0, this->alpha);
	glBegin(GL_LINE_LOOP);
	for (float i = 0.0; i < 2 * 3.1415926; i += 3.1415926 / 18)
	{
		glVertex2f(this->x + this->r * sin(i), this->y + this->r * cos(i));
	}
	glEnd();
}

vector<Circles> circl;

Button addvertical, addedge, deletevertical, deleteedge;

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight)
{
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1))
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] != 0
			&& this->adjMatrix[vertPos2][vertPos1] != 0)
		{
			cout << "Ребро между вершинами уже есть" << endl;
			return;
		}
		else if (vertPos1 == vertPos2)
		{
			cout << "Нельзя создать петлю" << endl;
			return;
		}
		else
		{
			this->adjMatrix[vertPos1][vertPos2] = weight;
			this->adjMatrix[vertPos2][vertPos1] = weight;
		}
	}
	else
	{
		cout << "Обеих вершин (или одной из них) нет в графе " << endl;
		return;
	}
}

template<class T>
void Graph<T>::DeleteEdge(const T& vertex1, const T& vertex2)
{
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1))
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] == 0
			&& this->adjMatrix[vertPos2][vertPos1] == 0)
		{
			if(del == false)
				cout << "Ребра между вершинами нет" << endl;
			return;
		}
		else
		{
			amountEdges -= 1;
			this->adjMatrix[vertPos1][vertPos2] = 0;
			this->adjMatrix[vertPos2][vertPos1] = 0;
		}
	}
	else
	{
		cout << "Обеих вершин (или одной из них) нет в графе " << endl;
		return;
	}
}

template<class T>
void Graph<T>::Print()
{
	if (!this->IsEmpty())
	{
		cout << "Матрица смежности графа: " << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			cout << this->vertList[i] << " ";
			for (int j = 0; j < vertListSize; ++j)
			{
				cout << " " << this->adjMatrix[i][j] << " ";
			}
			cout << endl;
		}
		Salesman();
	}
	else if (this->IsEmpty())
	{
		cout << "Граф пуст " << endl;
	}
}

template<class T>
void Graph<T>::InsertVertex(const T& vertex)
{
	if (!this->IsFull())
	{
		this->vertList.push_back(vertex);
	}
	else
	{
		cout << "Граф уже заполнен. Невозможно добавить новую вершину " << endl;
		return;
	}
}

template<class T>
void Graph<T>::DeleteVertex()
{
	if (!this->IsEmpty())
	{
		sourceVertex = amountVerts + 1;
		int* sourceVertPtr = &sourceVertex;
		del = true;
		for (int i = 1; i <= amountVerts; i++)
		{
			targetVertex = i;
			int* targetVertPtr = &targetVertex;
			DeleteEdge(*sourceVertPtr, *targetVertPtr);
		}
		this->vertList.pop_back();
		del = false;
	}
	else
	{
		cout << "Граф Пуст" << endl;
		return;
	}
}

template<class T>
bool Graph<T>::IsFull()
{
	return (vertList.size() == maxSize);
}

template<class T>
bool Graph<T>::IsEmpty()
{
	if (this->vertList.size() != 0)
		return false;
	else
		return true;
}

template <class T>
int Graph<T>::GetVertPos(const T& vertex)
{
	for (int i = 0; i < this->vertList.size(); ++i)
	{
		if (this->vertList[i] == vertex)
			return i;
	}
	return -1;
}

template<class T>
Graph<T>::Graph()
{
	for (int i = 0; i < maxSize; ++i)
	{
		for (int j = 0; j < maxSize; ++j)
		{
			this->adjMatrix[i][j] = 0;
		}
	}
}

template<class T>
Graph<T>::~Graph()
{

}

Graph<int> graph;

Graph<int> makeGraph()
{
	Graph<int> graph;
	cout << "Введите количество вершин графа: "; cin >> amountVerts; cout << endl;
	cout << "Введите количество ребер графа: "; cin >> amountEdges; cout << endl;
	for (int i = 1; i <= amountVerts; ++i)
	{
		int* vertPtr = &i;
		graph.InsertVertex(*vertPtr);
	}

	for (int i = 0; i < amountEdges; ++i)
	{
		cout << "Исходная вершина: "; cin >> sourceVertex; cout << endl;
		int* sourceVertPtr = &sourceVertex;
		cout << "Конечная вершина: "; cin >> targetVertex; cout << endl;
		int* targetVertPtr = &targetVertex;

		cout << "Вес ребра: "; cin >> edgeWeight; cout << endl;
		graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);
	}
	cout << endl;
	graph.Print();
	return graph;
}

template<class T>
void Graph<T>::redstr(int** temp)
{
	for (int i = 0; i < amountVerts; i++)
	{
		int minimum = 1000000;
		for (int j = 0; j < amountVerts; j++)
			if ((temp[i][j] < minimum) && (temp[i][j] >= 0))
				minimum = temp[i][j];
		for (int j = 0; j < amountVerts; j++)
			if (temp[i][j] != -1 && temp[i][j] > 0)
				temp[i][j] -= minimum;
	}
};
template <class T>
void Graph<T>::redstlb(int** temp)
{
	for (int j = 0; j < amountVerts; j++)
	{
		int minimum = 1000000;
		for (int i = 0; i < amountVerts; i++)
			if ((temp[i][j] < minimum) && (temp[i][j] >= 0))
				minimum = temp[i][j];
		for (int i = 0; i < amountVerts; i++)
			if (temp[i][j] != -1 && temp[i][j] > 0)
				temp[i][j] -= minimum;
	}
};

template <class T>
int Graph<T>::nullstr(int** temp, int n, int check)
{
	int min = 1000000;
	for (int j = 0; j < amountVerts; j++)
		if (j != check)
			if ((min > temp[n][j]) && (temp[n][j] >= 0))
				min = temp[n][j];
	return min;
};
template <class T>
int Graph<T>::nullstlb(int** temp, int n, int check)
{
	int min = 1000000;
	for (int i = 0; i < amountVerts; i++)
		if (i != check)
			if ((temp[i][n] < min) && (temp[i][n] >= 0))
				min = temp[i][n];
	return min;
};

template <class T>
Pair Graph<T>::Solution(int** mod)
{
	Pair temp;
	int max = -1, a = 0, b = 0;
	for (int i = 0; i < amountVerts; i++)
		for (int j = 0; j < amountVerts; j++)
			if (mod[i][j] == 0) {
				int sum = nullstr(mod, i, j) + nullstlb(mod, j, i);
				if (sum >= max) {
					max = sum;
					a = i;
					b = j;
				}
			}
	for (int i = 0; i < amountVerts; i++)
		for (int j = 0; j < amountVerts; j++) {
			if (i == a) mod[i][j] = -1;
			if (j == b) mod[i][j] = -1;
			if (j == a && i == b) mod[i][j] = -1;
		}
	temp.first = a;
	temp.second = b;
	return temp;
};
template <class T>
void Graph<T>::Salesman()
{
	setlocale(LC_ALL, "rus");
	string res;
	vector<Pair> pair;
	int** temp = new int* [amountVerts];
	for (int i = 0; i < amountVerts; i++) temp[i] = new int[amountVerts];

	for (int i = 0; i < amountVerts; i++)
		for (int j = 0; j < amountVerts; j++)
		{
			if (i != j)
				temp[i][j] = adjMatrix[i][j];
			else temp[i][j] = -1;
		}

	int i = 0;
	while (i != amountVerts)
	{
		redstr(temp);
		cout << " Матрица с редуцированными строками" << endl << endl;
		for (int i = 0; i < amountVerts; i++)
		{
			for (int j = 0; j < amountVerts; j++)
				if (temp[i][j] == -1)
					cout << "M" << "    ";
				else
					cout << temp[i][j] << "    ";
			cout << endl;
		}
		redstlb(temp);
		cout << " Матрица с редуцированными столбцами" << endl << endl;
		for (int i = 0; i < amountVerts; i++)
		{
			for (int j = 0; j < amountVerts; j++)
				if (temp[i][j] == -1)
					cout << "M" << "    ";
				else
					cout << temp[i][j] << "    ";
			cout << endl;
		}
		pair.push_back(Solution(temp));
		cout << " Полученная после изменения матрица" << endl << endl;
		for (int i = 0; i < amountVerts; i++)
		{
			for (int j = 0; j < amountVerts; j++)
				if (temp[i][j] == -1)
					cout << "M" << "    ";
				else
					cout << temp[i][j] << "    ";
			cout << endl;
		}
		i++;
	}
	for (int i = 0; i < pair.size(); i++)
		for (int j = i; j < pair.size(); j++)
			if (pair[i].second == pair[j].first) swap(pair[i + 1], pair[j]);
	if ((this->vertList[pair[0].first]) == (this->vertList[pair[amountVerts - 1].second]))
	{
		res += to_string(this->vertList[pair[0].first]) + "->" + to_string(this->vertList[pair[0].second]);
		for (int i = 1; i < pair.size(); i++)
		{
			res += "->" + to_string(this->vertList[pair[i].second]);
		}
		cout << endl << res;

		int a = adjMatrix[pair[i - 1].second][pair[0].first];
		a += adjMatrix[pair[0].first][pair[0].second];

		for (int i = 1; i < pair.size(); i++)
			a += adjMatrix[pair[i].first][pair[i].second];

		for (int i = 0; i < pair.size() - 1; i++)
			if (pair[i].second != pair[i + 1].first)
				a += adjMatrix[pair[i].second][pair[i + 1].first];

		cout << "\nОбщее расстояние: " << a << '\n';
	}
	else cout << "Ошибка!\n Невозможно решить задачу коммивояжера для этого случая\n";
}

int R;
void setCoord(int i, int n)
{
	int R_;
	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 3 * (WinH / 13) / n;
		R_ = WinH / 2 - R + 100;
	}
	else
	{
		R = 3 * (WinW / 13) / n;
		R_ = WinW / 2 - R + 100;
	}
	float theta = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = (R_ * cos(theta) + y0 - WinH/2 - 100)/2;
	float x1 = (R_ * sin(theta) + x0 - WinW/2)/2;

	vertC[i].x = x1;
	vertC[i].y = y1;
}

void drawCircle(int x, int y, int R)
{
	glColor3f(0.0, 1.0, 1.0);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 1.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}
template <typename T>
string to_string(T val)
{
	ostringstream oss;
	oss << val;
	return oss.str();
}
void drawText(int nom, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = to_string(nom);
	glRasterPos2i(x1 - 15, y1);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawVertex(int n)
{
	for (int i = 0; i < n; i++)
	{
		drawCircle(vertC[i].x, vertC[i].y, R);
		glColor3f(1.0f, 0.5f, 0.0f);
		drawText(i + 1, vertC[i].x, vertC[i].y);
	}
}

void drawLine(int text, int x0, int y0, int x1, int y1)
{
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();
	glColor3f(0.0f, 0.9f, 0.0f);
	drawText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);
}

template<class T>
void Graph<T>::DrawGraph()
{
	int n = vertList.size();
	for (int i = 0; i < n; i++)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int a = adjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	drawVertex(n);
}

void reshape(int w, int h)
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void displayOptions() 
{
	Button addvertical("add vertical"), addedge("add edge"), deletevertical("remove vertical"), deleteedge("remove edge");
	offset = 0.0;
	addvertical.draw_button();
	addedge.draw_button();
	deletevertical.draw_button();
	deleteedge.draw_button();
	
	::addvertical = addvertical;
	::addedge = addedge;
	::deletevertical = deletevertical;
	::deleteedge = deleteedge;
}

void mouse(int button, int state, int x, int y)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (addvertical.clicked_button(x, y))
		{
			amountVerts += 1;
			int* vertPtr = &amountVerts;
			graph.InsertVertex(*vertPtr);
			glClearColor(1.0, 0.5, 0.0, 1.0);
			glClear(GL_COLOR_BUFFER_BIT);

			graph.DrawGraph();
			displayOptions();

			glutSwapBuffers();

		}
		if (addedge.clicked_button(x, y))
		{
			amountEdges += 1;

			cout << "Исходная вершина: "; cin >> sourceVertex; cout << endl;
			int* sourceVertPtr = &sourceVertex;
			cout << "Конечная вершина: "; cin >> targetVertex; cout << endl;
			int* targetVertPtr = &targetVertex;

			cout << "Вес ребра: "; cin >> edgeWeight; cout << endl;
			graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);

			glClearColor(1.0, 0.5, 0.0, 1.0);
			glClear(GL_COLOR_BUFFER_BIT);

			graph.DrawGraph();
			displayOptions();

			glutSwapBuffers();
		}
		if (deletevertical.clicked_button(x, y))
		{
			amountVerts -= 1;
			graph.DeleteVertex();
			glClearColor(1.0, 0.5, 0.0, 1.0);
			glClear(GL_COLOR_BUFFER_BIT);

			graph.DrawGraph();
			displayOptions();

			glutSwapBuffers();
		}
		if (deleteedge.clicked_button(x, y))
		{
			amountEdges -= 1;

			cout << "Исходная вершина: "; cin >> sourceVertex; cout << endl;
			int* sourceVertPtr = &sourceVertex;
			cout << "Конечная вершина: "; cin >> targetVertex; cout << endl;
			int* targetVertPtr = &targetVertex;

			graph.DeleteEdge(*sourceVertPtr, *targetVertPtr);

			glClearColor(1.0, 0.5, 0.0, 1.0);
			glClear(GL_COLOR_BUFFER_BIT);

			graph.DrawGraph();
			displayOptions();

			glutSwapBuffers();
		}
	}

}

void Timer(int value)
{
	for (vector<Circles>::iterator i = circl.begin(); i != circl.end(); i++)
	{
		i->r++;
		i->alpha /= 1.05;
	}
	glutPostRedisplay();
	glutTimerFunc(30, Timer, 0);
}

void Timer2(int)
{
	Circles c(rand() % int(WinW) - WinW / 2, rand() % int(WinH) - WinH / 2, rand() % 20);
	circl.push_back(c);
	glutPostRedisplay();
	glutTimerFunc(100, Timer2, 0);
}

void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-WinW / 2, WinW / 2, WinH / 2, -WinH / 2, -200.0, 200.0);
	glViewport(0, 0, WinW, WinH);
	glClearColor(1.0, 0.5, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_ALPHA);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	vector<Circles>::iterator i = circl.begin();
	while (i != circl.end())
	{
		i->draw();
		if (i->alpha <= 0.05f)
			i = circl.erase(i);
		else
			++i;
	}
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA);

	graph.DrawGraph();
	displayOptions();

	glutSwapBuffers();
}