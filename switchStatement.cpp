#include <iostream> 	// use cout and others
#include <vector> 		// used for vectors
#include <string> 		// used for strings
#include <fstream>		// for file I/O

using namespace std;

int main() {
	
	// Conditions: 			==, !=, >, <. >=, <=
	// Logical Operators:	&&, ||. !

	int greetingOption = 2;

	switch(greetingOption) {
		case 1:
		cout << "bonjou" << endl;
		break;

		case 2:
		cout << "Hola" << endl;
		break;

		case 3:
		cout << "Hallo" << endl;
		break;

		default:
		cout << "Hello" << endl;
		break;
	}

	return 0; 
}