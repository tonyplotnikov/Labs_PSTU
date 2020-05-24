// Плотников Антон, лабораторная работа №26. Обработка исключительных ситуаций.
// [] – Операция доступа по индексу;
// () – Операция определение размера списка;
// +число – Операция, которая добавляет константу ко всем элементам списка;
//  ++ - Операция добавления элемента в конец списка.

#include "List.h"
#include <iostream>
using namespace std;
int main()
{
	try
	{
		List x(2);
		List y;
		cout << x;
		cout << "Number?" << endl;
		int i;
		cin >> i;
		cout << x[i] << endl;
		cout << "size= " << x() << endl;
		x = x + 3;
		cout << x << endl;
		y = x++;
	}
	catch (int)
	{
		cout << "ERROR!!!" << endl;
	}
	return 0;
}