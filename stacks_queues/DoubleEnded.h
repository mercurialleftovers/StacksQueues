#pragma once
#include <string>
#include "LinkedList.h"

using std::string;

class DoubleEnded {
private:
	LinkedList* head, * tail;

public:
	DoubleEnded();
	void add(string);
	void print_all();
	string stack_get();
	string dequeue();
	void print_all_reverse();
};