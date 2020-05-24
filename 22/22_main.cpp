﻿// Плотников Антон, лабораторная работа № 22. Перегрузка операций.
// 1. Операции сравнения (<, >).
// 2. Операция ++, которая работает следующим образом : если форма операции префиксная, то увеличивается первое число, если форма операции постфиксная, то увеличивается второе число.
#include "Pair.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Pair a;
	Pair b;
	Pair c;
	cin >> a;
	cin >> b;
	cout << "Числа(a): " << a << endl;
	++a;
	cout << "Числа(a): " << a << endl << endl;
	a++;
	cout << "Числа(a): " << a << endl;
	cout << "Числа(b): " << b << endl;
	c = ++++b++++;
	cout << "Числа(c): " << c << endl;
	if (a < b)
		cout << "a < b" << endl;
	else if (a > b)
		cout << "a > b" << endl;
	else
		cout << "Неопределено" << endl;
	if (a > c)
		cout << "a > c" << endl;
	else if (a < c)
		cout << "a < c" << endl;
	else
		cout << "Неопределено" << endl;
}