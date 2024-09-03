#pragma once
#include <string>

using std::string;

struct LinkedList {
	string data;
	LinkedList* next, * previous;
};

LinkedList* LinkedList_makeNew(string data);