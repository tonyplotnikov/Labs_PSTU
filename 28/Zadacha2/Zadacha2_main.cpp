#include <iostream>
#include <List>
#include <ctime>
#include "Pair.h"
using namespace std;
typedef list<Pair>List;
List make_List(int n)
{
	Pair a;
	List l;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		l.push_back(a);
	}
	return l;
}
void print_List(List l)
{
	for (auto i = l.begin(); i != l.end(); i++)
		cout << *i << endl;
	cout << endl;
}
List srednee(List& l, int& n)
{
	Pair t;
	int s = 0, pos;
	for (auto i = l.begin(); i != l.end(); i++)
		t = t + *i;
	cout << "Ïîçèöèÿ: "; cin >> pos;
	auto i = l.begin();
	advance(i, pos - 1);
	s = t / n;
	Pair a(s, s);
	l.insert(i, a);
	n++;
	return l;
}
List del(List& l, int& n, int a, int b, int key)
{
	auto i = l.begin();
	auto j = l.begin();
	advance(i, a);
	advance(j, b);
	int pos = -1;
	for (i; i != j; i++)
	{
		if (i->get_first() == key || i->get_second() == key)
		{
			break;
		}
	}
	if (i != j--)
	{
		l.erase(i);
		n--;
	}
	return l;
}
List vichest(List& l, int n)
{
	Pair t;
	int s;
	for (auto i = l.begin(); i != l.end(); i++) t = t + *i;
	s = t / n;
	for (auto i = l.begin(); i != l.end(); i++) *i = *i - s;
	return l;
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	try
	{
		List l;
		int n, a, b, key;
		cout << "Êîëè÷åñòâî ýëåìåíòîâ: "; cin >> n;
		l = make_List(n);
		print_List(l);
		srednee(l, n);
		print_List(l);
		cout << "Íà÷àëî äèàïàçîíà: "; cin >> a;
		cout << "Êîíåö äèàïàçîíà: "; cin >> b;
		cout << "Êëþ÷: "; cin >> key;
		del(l, n, a, b, key);
		print_List(l);
		cout << "Ïîñëå âû÷èòàíèÿ: " << endl;
		vichest(l, n);
		print_List(l);
	}
	catch (int)
	{
		cout << "Îøèáêà!";
	}
}