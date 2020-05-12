//Антон Плотников, лабораторная работа №20(1). Классы и Объекты. Инкапсуляция, конструкторы.
#include <iostream>
#include "fraction.h"
using namespace std;
void fraction::init(int F, double S)
{
	first = F;
	second = S;
}
void fraction::show()
{
	cout << "\nfirst = " << first;
	cout << "\nsecond = " << second;
	cout << endl;
}
void fraction::read()
{
	cout << "\n Время: ";
	cin >> first;
	cout << "\n Цена за одну единицу времени: ";
	cin >> second;
}
double fraction::cost()
{
	return first * second;
}
int main()
{
	setlocale(LC_ALL, "rus");
	fraction A;
	A.read();
	A.show();
	A.cost();
	cout << "Стоимость разговора: " << A.cost() << endl;
}