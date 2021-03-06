/* 
 * Code from following: https://www.youtube.com/watch?v=Rub-JsjMhWY
 *
*/

#include <iostream>		// for cout, cin, etc
#include <string>		// for strings
#include <vector>		// for vectors
#include <fstream>		// for file i/o input

using namespace std;

// a function that returns an int and whose second argument has a default value
int addNumbers(int firstNum, int secondNum = 0) {

	int combinedValue = firstNum + secondNum;
	return combinedValue;
}

// override function
int addNumbers(int firstNum, int secondNum, int thirdNum) {

	return firstNum + secondNum + thirdNum;
}

int getFactorial(int number) {
	int sum;
	if(number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;
}

int main() {
	
	// Call both functions
	cout << "Add Functions with two arguments: " << addNumbers(1) << endl;

	cout << "Add Functions with three arguments: " << addNumbers(1, 5 , 6) << endl;

	cout << "Recursive Factorial of 3 is: " << getFactorial(3) << endl;

	return 0;
}