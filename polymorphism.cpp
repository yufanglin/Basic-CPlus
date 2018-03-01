/*
 * Code from following this tutorial
 * https://leetcode.com/problems/trim-a-binary-search-tree/description/
*/

#include <iostream> 	// for cout, cin, etc
#include <string>		// for strings
#include <vector>		// for vectors
#include <fstream>		// for file i/o


using namespace std;

class Animal {
public:
	virtual void makeSound() { cout << "The Animal says grr" << endl; }
};

class Dog: public Animal {
public:
	void makeSound() { cout << "The Dog says woof" << endl; }
};

class Cat: public Animal {
public:
	void makeSound() { cout << "The Cat says meow" << endl; }
};


int main() {



	return 0;
}