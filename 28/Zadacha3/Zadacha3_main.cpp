#include "List.h"
#include <X:\PROGRAMMING\28\Zadacha2\Pair.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, pos, a, b, key;
	cout << "Количество элементов списка: ";
	cin >> n;
	List <Pair> mylist(n);
	mylist.Print();
	Pair p = mylist.srednee();
	cout << "Среднее арифметическое: " << p << endl;
	cout << "Позиция:"; cin >> pos;
	mylist.add(p, pos);
	mylist.Print();
	p = mylist.srednee();
	mylist.vichest(p);
	cout << "После вычитания: " << endl;
	mylist.Print();
	cout << "Диапозон от : "; cin >> a; cout << "до:"; cin >> b;
	cout << "Значение из дапозона : "; cin >> key;
	mylist.Del(n, a, b, key);
	mylist.Print();
}