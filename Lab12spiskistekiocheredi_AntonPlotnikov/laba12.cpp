// Лабораторная работа №12. Плотников Антон. ИВТ-19-1Б.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Header1.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int g;
	cout << "1.Однонаправленный список\n";
	cout << "2.Двунаправленный список\n";
	cout << "3.Стек\n";
	cout << "4.Очередь\n";
	cin >> g;
	variant(g);
}