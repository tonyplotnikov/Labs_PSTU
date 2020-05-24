//Плотников Антон, лабораторная работа № 21(1). Принцип подстановки. Простое наследование.
// name - имя ( тип - string )
// age - возраст ( тип - int )
#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
void f1(Person& c)
{
	c.Set_name("Alexey);
	cout << c;
}
Person f2()
{
	Student s("Anton", 18, 1);
	return s;
}
int main()
{
	Person a;
	cin >> a;
	cout << a;
	Person b("Ivan", 19);
	cout << b;
	a = b;
	cout << a;
	Student c;
	cin >> c;
	cout << c;
	f1(c);
	a = f2();
	cout << a;
}