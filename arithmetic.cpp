// This is a comment
/*

multiline comment

*/

#include <iostream>		// use cout and others
#include <vector> 		// used for vectors
#include <string> 		// used for strings
#include <fstream> 		// for file I/O


// So std won't be referenced each time 
using namespace std;

int main() {

	// Operations: +, -, *, /, %, ++

	cout << "5 + 2 = " << 5+2 << endl;
	cout << "5 - 2 = " << 5-2 << endl;
	cout << "5 * 2 = " << 5*2 << endl;
	cout << "5 / 2 = " << 5/2 << endl;
	cout << "5 % 2 = " << 5 % 2 << endl;


	// decrement & increments
	int five = 5;

	cout << "5++ = " << five++ << endl;		// perform action after getting the value of five
	cout << "++5 = " << ++five << endl;		// increments it first (was six due to line 31)
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	five += 5;

	cout << "five += 5 : " << five << endl;

	// Order of Operations states that * and / is performed before + and -
	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 -3) * 2 = " << (1 + 2 - 3) * 2 << endl;

	// Casting
	cout << "4 / 5 = " << (float) 4 / 5 << endl; 	// would be 0 without casting

	// stop the program
	return 0;
}