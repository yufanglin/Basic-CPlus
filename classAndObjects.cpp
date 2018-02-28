// Code from following this tutorial: https://www.youtube.com/watch?v=Rub-JsjMhWY

#include <iostream>		// for cout, cin, etc
#include <vector>		// for vector usage
#include <string>		// for string usage
#include <fstream>		// for file i/o

using namespace std;

class Animal {
private:
	int height;
	int weight;

	string name;

	static int numOfAnimals;

public:
	// Accessor properties for private fields (Also encapsulation)
	int getHeight() { return height; }
	int getWeight() { return weight; }
	string getName() { return name; }

	// Mutator properties
	void setHeight(int cm) { height = cm; }
	void setWeight(int kg) { weight = kg; }
	void setName(string animalName) { name = animalName; }

	// // prototype function
	// void setAll(int, int, string);

	// Constructors
	Animal();

	Animal(int, int, string);

	// Deconstructors
	~Animal();

	// Static Method: only one exists, regardless of how many objects there are
	static int getNumOfAnimals() { return numOfAnimals; }

	void toString();
};

// Declare everything
int Animal::numOfAnimals = 0;
// void Animal::setAll(int height, int weight, string name) {
	
// 	 * Set all the properties (can just put this in athe constructor)
	


// 	this->height = height;
// 	this->weight = weight;
// 	this->name = name;

// 	// Increment animals
// 	Animal::numOfAnimals++;
// }

Animal::Animal(int height, int weight, string name) {
	this->height = height;
	this->weight = weight;
	this->name = name;

	// Increment animals
	Animal::numOfAnimals++;
}

Animal::~Animal() {
	// Decrement the number of animals
	Animal::numOfAnimals--;
	cout << "Animal " << this->name << " destroyed" << endl;
}

Animal::Animal() {
	// Increment the number of animals
	Animal::numOfAnimals++;
}

void Animal::toString() {
	cout << this->name << " is " << this->height << " cms tall and " << this->weight << " kgs in weight" << endl;

}

// INHERITANCE
class Dog : public Animal {
private:
	string sound = "Woof";

public:
	void getSound() { cout << sound << endl; }

	Dog(int, int, string, string);

	Dog() : Animal(){};

	void toString();
};

// Define Dog class properties
Dog::Dog(int height, int weight, string name, string bark) :
Animal(height, weight, name) {
	this -> sound = bark;
}

void Dog::toString() {
	cout << this -> getName() << " is " << this -> getHeight() << " cms tall and " << this -> getWeight() << " kgs in weight and says " << this -> sound;
}



int main() {
	// Create an Animal Object without constructor
	Animal fred;
	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");

	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and " << fred.getWeight() << " kgs n weight" << endl;


	// Create an animal object with constructor
	Animal tom(36, 15, "Tom");

	cout << tom.getName() << " is " << tom.getHeight() << " cms tall and " << tom.getWeight() << " kgs n weight" << endl;

	// Create Dog
	Dog spot(38, 16, "Spot", "Woof");

	cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

	spot.getSound();

	tom.toString();
	spot.toString();


	spot.Animal::toString();

	return 0;
}