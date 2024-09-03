#include <string>;
#include "LinkedList.h";

using std::string;

LinkedList* LinkedList_makeNew(string data) {
	LinkedList* ptr = new LinkedList;
	ptr->data = data;
	ptr->next = ptr->previous = nullptr;
	return ptr;
}