﻿// Плотников Антон, лабораторная работа №27. Сохранение данных в файле с использованием потоков.
#include "Pair.h"
#include <iostream>
#include <fstream>
#include "File.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Pair p, p1, p2, d;
	int k, c;
	char file_name[30];
	do
	{ 
		cout << "\n1. Создать файл";
		cout << "\n2. Напечатать файл";
		cout << "\n3. Удалить все записи большие заданного значения";
		cout << "\n4. Добавить K записей после записи с номером N";
		cout << "\n5. Увеличить все записи с заданным значением на число L";
		cout << "\n0. Выход\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "Название файла: "; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)cout << "Невозможно создать файл";
			break;
		case 2: cout << "Название файла: "; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "Файл пуст\n";
			if (k < 0)cout << "Невозможно прочитать файл\n";
			break;
		case 3: cout << "Название файла: "; cin >> file_name;
			int nom;
			cout << "Значение:\n"; cin >> d;
			k = del_file(file_name, d);
			if (k < 0)cout << "Невозможно прочитать файл";
			break;
		case 4: cout << "Название файла: ";
			cin >> file_name;
			int q;
			cout << "N: "; cin >> nom;
			cout << "K: "; cin >> q;
			for (int i = 0; i < q; i++)
			{
				cout << "Новая пара чисел:\n";
				cin >> p1;
				k = add_file(file_name, nom, p1);
				if (k < 0) cout << "Невозможно прочитать файл";
				if (k == 0) k = add_end(file_name, p1);
			}
			break;
		case 5: cout << "Название файла: ";
			cin >> file_name;
			int L;
			cout << "Значение:\n";
			cin >> p2;
			cout << "L: "; cin >> L;
			k = change_file(file_name, L, p2);
			if (k < 0) cout << "\nНевозможно прочитать файл";
			if (k == 0) cout << "\nНет такой записи";
			break;
		}
	} while (c != 0);
}