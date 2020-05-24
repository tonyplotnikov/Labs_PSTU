﻿#include "Pair.h"
#include <iostream>
using namespace std;
Pair& Pair::operator=(const Pair& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
Pair Pair::operator+(int L)
{
	first = first + L;
	second = second + L;
	return *this;
}
bool Pair::operator<(const Pair& t)
{
	bool result = false;
	if (this->first < t.first && this->second < t.second)
	{
		result = true;
	}
	if (this->first == t.first && this->second < t.second)
	{
		result = true;
	}
	if (this->first < t.first && this->second == t.second)
	{
		result = true;
	}
	return result;
}
bool Pair::operator>(const Pair& t)
{
	bool result = false;
	if (this->first > t.first && this->second > t.second)
	{
		result = true;
	}
	if (this->first == t.first && this->second > t.second)
	{
		result = true;
	}
	if (this->first > t.first && this->second == t.second)
	{
		result = true;
	}
	return result;
}
bool Pair::operator==(const Pair& t)
{
	bool result = false;
	if (this->first == t.first && this->second == t.second)
	{
		result = true;
	}
	return result;
}
Pair& Pair::operator++()
{
	++first;
	return *this;
}
Pair Pair::operator ++(int)
{
	second++;
	return *this;
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "Первое число: "; in >> t.first;
	cout << "Второе число: "; in >> t.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	return (out << t.first << " : " << t.second);
}
fstream& operator>>(fstream& fin, Pair& p)
{
	fin >> p.first;
	fin >> p.second;
	return fin;
}
fstream& operator<<(fstream& fout, const Pair& p)
{
	fout << p.first << "\n" << p.second << "\n";
	return fout;
}