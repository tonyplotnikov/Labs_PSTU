#include "Pair.h"
Pair& Pair::operator =(const Pair& t)
{
	first = t.first;
	second = t.second;
	return*this;
}
Pair Pair::operator+(Pair k)
{
	int f = first + k.first;
	double s = second + k.second;
	Pair temp(f, s);
	return temp;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	return (out << t.first << " : " << t.second);
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "Первое число: "; in >> t.first;
	cout << "Второе число: "; in >> t.second;
	return in;
}