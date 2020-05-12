#pragma once
#include <iostream>
#include <string>
using namespace std;
class ticket
{
	string data;
	int number;
	double count;
public:
	ticket();
	ticket(int, string, double);
	ticket(const ticket&);
	~ticket();
	int get_number();
	void set_number(int);
	string get_data();
	void set_data(string);
	double get_count();
	void set_count(double);
	void show();
};