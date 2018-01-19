#include <iostream>	// use cout and others
#include <vector>	// For vectors
#include <string>	// For strings
#include <fstream>	// For i/o file input

using namespace std;

int main() {


	int myFavNums[5];

	int badNums[5] = {4, 13, 14, 24, 34};

	cout << "Bad Number 1: " << badNums[0] << endl;

	// Multidimensional Arrays
	char myName[5][5] = {{'D', 'e', 'r', 'e', 'k'},
						{'B', 'a', 'n', 'a', 's'}};

	cout << "2nd letter in 2nd array: " << myName[1][1] << endl;
	cout << "Entire Multidimensional Array: " << myName << endl;

	myName[0][2] = 'e';

	cout << "New value: " << myName[0][2] << endl;

	return 0;
}

