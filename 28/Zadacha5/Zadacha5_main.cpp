#include <X:\PROGRAMMING\28\Zadacha2\Pair.h>
#include <iostream>
#include <list>
#include <queue>
#include "List.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, pos, a, b, key;
	cout << "Количество элементов списка: ";
	cin >> n;
	List<Pair>mylist(n);
	mylist.Print();
	cout << "Позиция списка: ";
	cin >> pos;
	Pair p = mylist.Srednee(n);
	cout << "Среднее: " << p << endl;
	mylist.Addd(p, pos, n);
	mylist.Print();
	p = mylist.Srednee(n);
	mylist.Vichet(p);
	cout << "После вычитания: " << endl;
	mylist.Print();
	cout << "Диапазон от: "; cin >> a; cout << "до:"; cin >> b;
	cout << "Значение из диапозона: "; cin >> key;
	mylist.Delete(n, a, b, key);
	mylist.Print();
}