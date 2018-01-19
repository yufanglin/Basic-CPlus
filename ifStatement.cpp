#include <iostream>		// use cout and others
#include <vector> 		// used for vectors
#include <string> 		// used for strings
#include <fstream> 		// for file I/O

using namespace std;

int main() {
	
	// Conditions: 			==, !=, >, <. >=, <=
	// Logical Operators:	&&, ||. !

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;


	if((age >= 1) && (age < 16)) {
		// too young, can't take the exam yet
		cout << "You can't drive" << endl;
	} 
	else if (!isNotIntoxicated) {
		// Drunk, can't drive
		cout << "You can't drive" << endl;
	}
	else if ((age >= 80) && ((age > 100) || ((age - ageAtLastExam) > 5))) {
		// too old, either can't drive or have to take the test every 5 years, and it's been more than 5 years since last test
		cout << "You can't drive" << endl;

	}
	else {
		cout << "You can drive" << endl;
	}

	return 0; 
}