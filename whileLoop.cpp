#include <iostream>		// use cout and others
#include <vector>		// For vectors
#include <string>		// For strings
#include <fstream> 		// For I/O file input

// avoid using std each time
using namespace std;

int main() {
	
	// generate a random int from 1 to 100
	int randNum = (rand() % 100) + 1; 

	while(randNum != 100) {
		// print random number onto screen
		cout << randNum << ", ";

		// randomize number again
		randNum = (rand() % 100) + 1;
	}

	cout << endl;


	////////////// simulate a for-loop
	int index = 1;

	while(index <= 10) {
		cout << index << ", ";
		index++;
	}

	cout << endl;

	return 0;
}