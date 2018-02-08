/*
 * Code from following this tutorial:
 * https://www.youtube.com/watch?v=Rub-JsjMhWY
*/

#include <iostream>		// for cout, cin, etc
#include <vector>		// for vectors
#include <string>		// for strings
#include <fstream>		// for file I/O 

using namespace std;

void makeMeYoung(int* age) {
	cout << "I used to be " << *age << endl;
	*age = 21;
}

void actYourAge(int& ageReference) {
	ageReference = 39;
}


int main() {
	// reference operator:	&

	int myAge = 39;
	char myGrade = 'A';

	cout << "Size of int: 				" << sizeof(myAge) << endl;
	cout << "Size of char: 				"<< sizeof(myGrade) << endl;

	cout << "myAge is located at: 		" << &myAge << endl;


	cout << "\n\n--------------------------------------------" << endl;
	int* agePtr = &myAge;

	cout << "Address of myAge pointer: 	" << endl;

	// de-reference:
	cout << "Data at memory address:	" << *agePtr << endl;


	cout << "\n\n--------------------------------------------" << endl;
	int badNums[5] = {4, 13, 14, 24, 34};

	// print out array
	cout << "Number Array Ex: 			";
	for (int i = 0; i < 5; i++) {
		cout << badNums[i] << " ";
	}
	cout << endl;

	// create a pointer to the bad numbers array
	int* numArrayPtr = badNums;

	cout << "1st Element	-	Address: " << numArrayPtr << ", Value: " << *numArrayPtr << endl;
	numArrayPtr++;

	cout << "2nd Element	-	Address: " << numArrayPtr << ", Value: " << *numArrayPtr << endl;
	cout << "Array Pointer	-	Address: " << badNums << ", Value: " << *badNums << endl;



	cout << "\n\n--------------------------------------------" << endl;
	makeMeYoung(&myAge);
	cout << "Change age through referece:	I'm " << myAge << " years old." << endl; 



	cout << "\n\n--------------------------------------------" << endl;
	int& ageRef = myAge;
	cout << "myAge 	:	" << myAge << endl;

	cout << "increment age through reference ++ " << endl;
	ageRef++;
	cout << "myAge 	:	" << myAge << endl;




	cout << "\n\n--------------------------------------------" << endl;
	actYourAge(ageRef);
	cout << "myAge 	:	" << myAge << endl;

	return 0;
}



































