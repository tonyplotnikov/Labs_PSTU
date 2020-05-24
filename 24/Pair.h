#pragma once
#include <iostream>
using namespace std;
class Pair
{
	int first;
	double second;
public:
	Pair(void) { first = 0; second = 0; };
	Pair(int f, double s) { first = f; second = s; }
	Pair(const Pair& t) { first = t.first; second = t.second; }
	Pair& operator=(const Pair&);
	Pair operator+(Pair k);
	friend ostream& operator<< (ostream& out, const Pair&);
	friend istream& operator>> (istream& in, Pair&);
	virtual ~Pair(void) {};
};