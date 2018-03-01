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
	void getFamily() {
		cout << "We are animals" << endl;
	}

	// we have virtual method when we know that a method may be overwritten by a subclass
	virtual void getClass() {
		cout << "I'm an Animal" << endl;
	}
};

class Dog: public Animal {
public:
	// Override superclass method
	void getClass() { cout << "I'm a Dog" << endl; }
};

class GermanShepard: public Dog {
public:
	void getClass() { cout << "I'm a German Shepard" << endl; }
	void getDerived() { cout << "I'm an Animal and Dog" << endl; }
};


void whatClassAreYou(Animal *animal) {
	animal->getClass();
}


int main() {

	// Create animal instance
	Animal *animal = new Animal;

	// create dog instance
	Dog *dog = new Dog;

	animal->getClass();
	dog->getClass();

	// The following two returns will "I'm an Animal" if getClass is not a virtual method
	whatClassAreYou(animal);
	whatClassAreYou(dog);	// will print "I'm an Animal" if getClass() is not a virtual method in Animal


	Dog spot;
	GermanShepard max;

	// Create pointers to dog and german shepard since they are subclasses of animal
	Animal* ptrDog = &spot;
	Animal* ptrGShepard = &max;

	// can call the class that wasn't overwritten
	ptrDog -> getFamily();

	// can call the class that was overwritten
	ptrDog -> getClass();


	ptrGShepard -> getFamily();

	ptrGShepard -> getClass();

	return 0;
}