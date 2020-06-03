// Лабораторная работа №9. Плотников Антон. ИВТ-19-1Б.
#include <iostream>
#include <string.h>
#include <string>
#include <ctime>
using namespace std;
void umalch(string name = "Антон", string soname = "Плотников", string otchestvo = "Андреевич")
{
	cout << "Фамилия: " << soname << endl << "Имя: " << name << endl << "Отчество: " << otchestvo << endl;
}
int perem(...)
{
	int s, f, g;
	s = rand() % 50;
	f = rand() % 50;
	g = rand() % 50;
	if (s > f && s > g)
		cout << "Максимальный параметр = s = " << s << endl;
	if (f > s && f > g)
		cout << "Максимальный параметр = f = " << f << endl;
	if (g > f && g > s)
		cout << "Максимальный параметр = g = " << g << endl;
	return 0;
}
template<class T, class D>
T max(T n, D d)
{
	D* a = new D[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = d;
		cout << a[i] << ' ';
	}
	cout << endl;
	D k;
	T r;
	cout << "Введите новый элемент массива: ";
	cin >> k;
	cout << "Введите номер элемента массива: ";
	cin >> r;
	for (int i = n - 1; i >= r - 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[r - 1] = k;
	n++;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}
int main()
{
	int p, k = 0, a = 5, b = 3;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	do
	{
		cout << "1. Функция с умалчиваемыми параметрами\n";
		cout << "2. Функция с переменным числом параметров\n";
		cout << "3. Перегруженные функции и шаблон функции\n";
		cout << "4. Выход\n";
		cin >> p;
		switch (p)
		{
		case 1:
		{
			umalch();
			break;
		}

		case 2:
		{
			perem(k, 1, 2, 3);
			break;
		}

		case 3:
		{
			max(15, 5.234);
			break;
		}
		}
	} while (p != 4);
}