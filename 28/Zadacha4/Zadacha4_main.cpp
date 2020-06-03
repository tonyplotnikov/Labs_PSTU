#include <X:\PROGRAMMING\Zadacha2\Pair.h>
#include <iostream>
#include <list>
#include <queue>
using namespace std;
typedef list<Pair> mylist;
typedef queue<Pair> myqueue;
myqueue make_queue(int n)
{
	myqueue q;
	Pair p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		q.push(p);
	}
	return q;
}
mylist copy_queue_to_list(myqueue q)
{
	mylist l;
	while (!q.empty())
	{
		l.push_back(q.front());
		q.pop();
	}
	return l;
}
myqueue copy_list_to_queue(mylist l)
{
	myqueue q;
	for (auto i = l.begin(); i != l.end(); ++i) q.push(*i);
	return q;
}
void Print(myqueue q)
{
	mylist l;
	while (!q.empty())
	{
		l.push_back(q.front());
		cout << q.front() << endl;
		q.pop();
	}
	cout << endl;
	q = copy_list_to_queue(l);
}
Pair Srednee(myqueue q, int n)
{
	mylist l = copy_queue_to_list(q);
	Pair sum;
	while (!q.empty())
	{
		sum = sum + q.front();
		q.pop();
	}
	Pair p(sum / n, sum / n);
	return p;
}
void Add(myqueue& q, Pair e1, int pos, int& n)
{
	mylist l;
	Pair p;
	int i = 1;
	while (!q.empty())
	{
		p = q.front();
		if (i == pos)
		{
			l.push_back(e1);
			n++;
		}
		l.push_back(p);
		q.pop();
		i++;
	}
	q = copy_list_to_queue(l);
}
void vichest(myqueue& q, Pair p)
{
	Pair temp;
	int sum = p.get_second();
	mylist l;
	while (!q.empty())
	{
		temp = q.front();
		l.push_back(temp - sum);
		q.pop();
	}
	q = copy_list_to_queue(l);
}
void Del(myqueue& q, int& n, int a, int b, int key)
{
	mylist l = copy_queue_to_list(q);
	auto i = l.begin();
	auto j = l.begin();
	advance(i, a);
	advance(j, b);
	for (i; i != j; ++i)
	{
		if (i->get_first() == key)
		{
			break;
		}
	}
	if (i != --j)
	{
		l.erase(i);
		n--;
	}
	q = copy_list_to_queue(l);
}
int main()
{
	setlocale(LC_ALL, "ru");
	Pair p;
	myqueue q;
	int n, pos, a, b, key;
	cout << "Êîëè÷åñòâî ýëåìåíòîâ ñïèñêà: ";
	cin >> n;
	q = make_queue(n);
	Print(q);
	p = Srednee(q, n);
	cout << "Ïîçèöèÿ â ñïèñêå: ";
	cin >> pos;
	Add(q, p, pos, n);
	Print(q);
	p = Srednee(q, n);
	vichest(q, p);
	cout << "Ïîñëå âû÷èòàíèÿ: " << endl;
	Print(q);
	cout << "Äèàïîçîí îò: "; cin >> a; cout << "äî:"; cin >> b;
	cout << "Çíà÷åíèå èç äèàïîçîíà: "; cin >> key;
	Del(q, n, a, b, key);
	Print(q);
}