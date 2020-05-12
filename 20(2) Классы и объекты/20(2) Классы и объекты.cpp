//Плотников Антон, лабораторная работа №20(2). Классы и Объекты. Инкапсуляция, конструкторы.
// номер - int.
// дата - string.
// сумма - double.
// ticket - пользовательский класс.
#include "ticket.h"
ticket::ticket()
{
	number = 0;
	data = "";
	count = 0;
	cout << "Конструктор без параметров для объекта: " << this << endl;
}
ticket::ticket(int K, string N, double S)
{
	number = K;
	data = N;
	count = S;
	cout << "Конструктор с параметрами для объекта: " << this << endl;
}
ticket::ticket(const ticket& t)
{
	data = t.data;
	number = t.number;
	count = t.count;
	cout << "Конструктор копирования для объекта: " << this << endl;
}
ticket::~ticket()
{
	cout << "Деструктор для объекта: " << this << endl;
}
int ticket::get_number()
{
	return number;
}
string ticket::get_data()
{
	return data;
}
double ticket::get_count()
{
	return count;
}
void ticket::set_number(int K)
{
	number = K;
}
void ticket::set_data(string N)
{
	data = N;
}
void ticket::set_count(double S)
{
 count = S;
}
void ticket::show()
{
	cout << "number :" << number << endl;
	cout << "data :" << data << endl;
	cout << "count :" << count << endl;
}
ticket make_ticket()
{
	string s;
	int i;
	double d;
	cout << "Введите номер: ";
	cin >> i;
	cout << "Введите дату: ";
	cin >> s;
	cout << "Введите сумму: ";
	cin >> d;
	ticket t(i, s, d);
	return t;
}
void print_ticket(ticket t)
{
	t.show();
}
void main()
{
	ticket t1;
	t1.show();
	ticket t2(48653461, "16.07.2015", 23);
	t2.show();
	ticket t3 = t2;
	t3.set_number(91911991);
	t3.set_data("20.04.2020");
	t3.set_count(100);
	print_ticket(t3);
	t1 = make_ticket();
	t1.show();
}