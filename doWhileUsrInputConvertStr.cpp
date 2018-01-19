#include <iostream>		// for cout and others
#include <vector>		// for vectors
#include <string>		// For strings
#include <fstream>		// for file i/o input


using namespace std;	// to not have to use std each time

int main() {

	// Create string variable for user to guess
	string numberGuessed;
	int intNumberGuessed = 0;

	do {
		// Ask the user to input a guess 
		cout << "Guess between 1 and 10: ";

		// Get user input
		getline(cin, numberGuessed);

		// Because user input is a string, convert it 
		intNumberGuessed = stoi(numberGuessed); // stoi converts string to double

		// print the user's guess
		cout << "You guessed: " << intNumberGuessed << endl;

	} while(intNumberGuessed != 4);

	cout << "Congratulations, you guessed correctly!" << endl;

	return 0;
}