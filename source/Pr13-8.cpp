//----------------------------------------------------------------------
// Pr13-8.cpp : driver for Gaddis 9E Rectangle version 4, pp. 759-761
// 
// This program calls the Rectangle class constructor.
// 
// Author: Tony Gaddis
// Modified by: Prof. Linda C
//----------------------------------------------------------------------
#include <iostream>

#include "Rectangle.h"
#include "rectio.h"

//----------------------------------------------------------------------
// using symbols
//----------------------------------------------------------------------
using std::cout;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
	// create a Rectangle instance with default dimensions
	Rectangle barn;
	barn.setName("barn");
	displayRect(barn);

	// create a Rectangle object with custom values
	Rectangle house("house", 30, 40);

	// for custom Rectangle dimensions
	double width, length;

	// run until user quits
	while (doAnotherRect(width, length)) {

		// store user's rectangle data
		house.setWidth(width);
		house.setLength(length);

		displayRect(house);
	}

	cout << "\nGoodbye!\n\n";

	return 0;
}
