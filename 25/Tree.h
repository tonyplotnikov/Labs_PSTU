#pragma once
#include "Object.h"
#include "Event.h"
class Tree
{
public:
	Tree(void);
	Tree(int);
	~Tree(void);
	void Add();
	void Del();
	void Show();
	void Show_odin(int);
	int operator()();
	void HandleEvent(const TEvent& e);
protected:
	Object** beg;
	int size;
	int cur;
};