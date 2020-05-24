#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Pair
{
	int first;
	double second;
public:
	Pair() { first = 0; second = 0; };
	Pair(int f, double s) { first = f; second = s; }
	Pair(const Pair& t) { first = t.first; second = t.second; }
	~Pair() {};
	int get_min() { return first; }
	double get_sec() { return second; }
	void set_min(int f) { first = f; }
	void set_sec(int s) { second = s; }
	Pair& operator=(const Pair&);
	Pair& operator++();
	Pair operator++(int);
	bool operator<(const Pair&);
	bool operator>(const Pair&);
	bool operator==(const Pair&);
	Pair operator+(int);
	friend istream& operator>>(istream& in, Pair& t);
	friend ostream& operator<<(ostream& out, const Pair& t);
	friend fstream& operator>>(fstream& fin, Pair& p);
	friend fstream& operator <<(fstream& fout, const Pair& p);
};