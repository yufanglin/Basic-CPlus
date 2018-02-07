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

	// Create a string to output
	string endQuote = 
					"\n"
					"Space: the final fontier. These are the voyages of the starship Enterprise." 
					" It's continuing mission: "
					"to explore strange new worlds, to seek out new life and new civilization, "
					"to boldly go where no one has gone before.";
	
	// create an output file stream
	ofstream writer1 ("endQuote.txt");

	// Check if stream was made
	if(! writer1) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer1 << endQuote << endl;
		// close the stream
		writer1.close();
	}

	/* Open a stream to append to whats there with ios::app
	 * ios::binary	:	Treat the file as binary
	 * ios::in 		:	Open a file to read input
	 * ios::trunc	:	Default
	 * ios::out 	: 	Open a file to write output
	*/

	// write to the endQuote file, create another stream
	ofstream writer2 ("endQuote.txt", ios::app);

	// Check if the stream was made
	if(! writer2) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer2 << "\n - Star Trek: The Next Generation" << endl;
		// Close the stream
		writer2.close();
	}

			////		----- READ -----		\\\\\
	// to hold each character in file
	char letter;

	// Create an input file stream
	ifstream reader1 ("endQuote.txt");

	// Check if stream opened
	if(! reader1) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		// Loop through characters in file while reader hasn't gotten to end of file
		for(int i = 0; ! reader1.eof(); i++) {
			reader1.get(letter);
			cout << letter;
		}
		cout << endl;
		// Close stream
		reader1.close();
	}


	return 0;
}