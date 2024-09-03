#include <string>
#include <iostream>
#include "DoubleEnded.h"
#include "LinkedList.h"

using std::string;
using std::cout;
using std::endl;


int main() {
	DoubleEnded d;
	
	d.add("bader");
	d.add("okba");
	d.add("aymen");

	cout << d.dequeue() << endl; // bader
	cout << d.stack_get() << endl; // aymen

	d.print_all(); // okba
	d.print_all_reverse(); // okba

	return EXIT_SUCCESS;
}