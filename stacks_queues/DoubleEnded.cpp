#include <string>
#include <iostream>
#include "DoubleEnded.h"
#include "LinkedList.h"

using std::string;
using std::cout;
using std::endl;


DoubleEnded::DoubleEnded() {
	this->head = nullptr;
	this->tail = nullptr;
}

void DoubleEnded::add(string data) {
	if (!this->head) {
		this->head = LinkedList_makeNew(data);
		this->tail = this->head;
	}
	else {
		LinkedList* ptr = LinkedList_makeNew(data);
		ptr->previous = this->tail;
		this->tail->next = ptr;
		this->tail = ptr;
	}
}

void DoubleEnded::print_all() {
	LinkedList* ptr = this->head;
	while (ptr) {
		cout << ptr->data << endl;
		ptr = ptr->next;
	}

	cout << "done printing the linked list\n";
}

void DoubleEnded::print_all_reverse() {
	LinkedList* ptr = this->tail;
	while (ptr) {
		cout << ptr->data << endl;
		ptr = ptr->previous;
	}

	cout << "done printing the linked list\n";
}

string DoubleEnded::stack_get() {
	string data = this->tail->data;
	LinkedList* old_tail = this->tail;
	this->tail = this->tail->previous;
	this->tail->next = nullptr; // a must

	delete old_tail;

	return data;
}

string DoubleEnded::dequeue() {
	string data = this->head->data;
	LinkedList* old_head = this->head;
	this->head = this->head->next;
	this->head->previous = nullptr; // a must

	delete old_head;

	return data;
}