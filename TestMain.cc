
#include <iostream>

#include "LineKeeper.h"
#include "Line.h"
using namespace std;
int main() {
	
	LineKeeper lk("input.txt");

	cout << "\n" << "lk.print(2)"  << "\n" ; 
	lk.print(2);
	cout << "\n" << "lk.print(13, 7)" <<  "\n";
	lk.print(13,7);
	cout << "\n" << "lk.print(25,5)" << "\n";
	lk.print(25,5);
	cout << "\n" << "lk.print(-10,14)" << "\n";
	lk.print(-10,14);

	cout << endl;
	return 0;
}
