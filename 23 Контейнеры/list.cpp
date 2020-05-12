﻿// Плотников Антон, лабораторная работа №23. АТД. Контейнеры
// Класс контейнер-список с ключевыми значениями. Тип: int.
// Реализовать операции :
// [] – доступ по индексу;
// () – определение размера списка;
// ++ - перейти к следующему элементу (с помощью класса - итератора);
// +число – добавить константу к каждому элементу списка.

#include "List.h"
List::List(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
	beg.elem = &data[0];
	end.elem = &data[size];
}
List::List(const List& a)
{
	size = a.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
}
List::~List()
{
	delete[]data;
	data = 0;
}
List& List::operator=(const List& a)
{
	if (this == &a)return *this;
	size = a.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
	return *this;
}
int& List::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "\nError! Index>size";
}
List List::operator+(const int k)//+k
{
	List temp(size);
	for (int i = 0; i < size; ++i)
		temp.data[i] += data[i] + k;
	return temp;
}
int List::operator ()()
{
	return size;
}
ostream& operator<<(ostream& out, const List& a)
{
	for (int i = 0; i < a.size; ++i)
		out << a.data[i] << " ";
	return out;
}
istream& operator>>(istream& in, List& a)
{
	for (int i = 0; i < a.size; ++i)
		in >> a.data[i];
	return in;
}