#include <iostream>	// use cout and others
#include <vector>	// For vectors
#include <string>	// For strings
#include <fstream>	// For i/o file input

using namespace std;

int main() {

	// Multidimensional Arrays
	char myName[5][5] = {{'D', 'e', 'r', 'e', 'k'},
	 					{'B', 'a', 'n', 'a', 's'}};

	myName[0][2] = 'e';


	for(int i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	// Multi-dimensional 
	for(int j = 0; j < 2; j++) {
		for(int k = 0; k < 5; k++) {
			cout << myName[j][k];
		}

		cout << endl;
	}

	return 0;
}

