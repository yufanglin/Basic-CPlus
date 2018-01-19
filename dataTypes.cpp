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

	// create a constant variable of type double
	const double PI = 3.145926535;

	// create a char variable
	char myGrade = 'A';			// takes up one byte in memory


	// Boolean
	bool isHappy = true;		// true = 1, false = 0


	int myAge = 23;

	float favNum = 3.141592;						// accurate up to 6 decimal places

	double otherFavNum = 1.6180339887;


	cout << "Favorite Number: " << favNum << endl;	// endl for character return

	// Other types include:
	/*
	** short int : At least 16 bits
	** long int : At least 32 bits
	** long long int : At least 64 bits
	** unsigned int : Same size as signed version
	** long double : Not less then double
	*/

	// Find the number bytes of a data type
	cout << "Size of int: " << sizeof(myAge) << endl;
	cout << "Size of char: " << sizeof(myGrade) << endl;
	cout << "Size of bool: " << sizeof(isHappy) << endl;
	cout << "Size of float: " << sizeof(favNum) << endl;
	cout << "Size of double: " << sizeof(otherFavNum) << endl;


	// To find the largest byte a number can be
	int largestInt = 2147483647;	// error or negative if int is one increment larger

	cout << "Largest int: " << largestInt << endl;

	// stop the program
	return 0;
}