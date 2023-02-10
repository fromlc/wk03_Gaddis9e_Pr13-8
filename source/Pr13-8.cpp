//----------------------------------------------------------------------
// Pr13-8.cpp : driver for Gaddis 9E Rectangle version 4, pp. 759-761
// 
// This program calls the Rectangle class constructor.
// 
// Author: Tony Gaddis
// Modified by: Prof. Linda C
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>

#include "Rectangle.h"

//----------------------------------------------------------------------
// comment DEBUG #define for release mode
//----------------------------------------------------------------------
#define DEBUG

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
	// To hold the room width and length
	double houseWidth, houseLength; 

#ifdef DEBUG
	houseWidth = 30;
	houseLength = 40;
#else
	// Get the width of the house.
	cout << "In feet, how wide is your house? ";
	cin >> houseWidth;

	// Get the length of the house.
	cout << "In feet, how long is your house? ";
	cin >> houseLength;
#endif

	// Create a Rectangle object.
	Rectangle house(houseWidth, houseLength);
	Rectangle barn;
	
	cout << setprecision(2) << fixed;

	// Display the house's width, length, and area.
	cout << "\nThe house is " << house.getWidth()
		<< " feet wide by " << house.getLength()
		<< " feet long.\n";
	cout << "The house has " << house.getArea()
		<< " square feet of area.\n";

	// Display the barn's width, length, and area.
	cout << "\nThe barn is " << barn.getWidth()
		<< " feet wide by " << barn.getLength()
		<< " feet long.\n";
	cout << "The barn has " << barn.getArea()
		<< " square feet of area.\n";

	return 0;
}