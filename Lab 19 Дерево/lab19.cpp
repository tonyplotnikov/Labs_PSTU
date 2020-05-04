﻿//Лабораторная работа №19. Бинарное дерево. Плотников Антон.
#include <iostream>
#include "Derevo.h"
int main()
{
	setlocale(LC_ALL,"rus");
	int n, g, h, q;
	cout << "Введите количество символов: ";
	cin >> n;
	q = n;
	char* a = new char[n];
	point* p = new point;
	do
	{
		cout << "1. Сформировать сбалансированное бинарное дерево\n";
		cout << "2. Распечатать полученное дерево\n";
		cout << "3. Найти высоту дерева\n";
		cout << "4. Преобразовать сбалансированное дерево в дерево поиска\n";
		cout << "5. Выход\n";
		cin >> g;
		switch (g)
		{
		case 1:
		{
			p = Tree(n, p);
			break;
		}
		case 2:
		{
			Run(p, n, q);
			break;
		}
		case 3:
		{
			h = High(p);
			cout << "Высота дерева: " << h << endl;
			break;
		}
		case 4:
		{
			char d;
			size_t i = 0;
			addToArray(p, a, i);
			DestroyTree(p);
			d = a[0];
			first(d);
			for (int i = 1; i < n; i++)
			{
				d = a[i];
				Add(p, d);
			}
			break;
		}
		}
	} while (g != 5);
}