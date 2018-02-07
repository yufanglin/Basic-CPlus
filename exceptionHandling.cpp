/*
 * Code from following this tutorial:
 * https://www.youtube.com/watch?v=Rub-JsjMhWY
 *
*/

#include <iostream>		// for cout, cin, etc
#include <vector>		// for vectors
#include <string>		// for strings
#include <fstream>		// for i/o input

using namespace std;


int main() {

	int number = 0;

	try {
		if(number != 0) {
			cout << 2/number << endl;
		}
		else throw(number);
	}
	catch(int number) {
		cout << number << " is not valid" << endl;
	}

}