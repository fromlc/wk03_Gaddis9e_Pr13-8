//----------------------------------------------------------------------
// rectio.cpp : i/o utility functions for Rectangle class
//----------------------------------------------------------------------
#include "Rectangle.h"

#include <iomanip>
#include <iostream>

//----------------------------------------------------------------------
// using symbols
//----------------------------------------------------------------------
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

//----------------------------------------------------------------------
// local function prototypes
//----------------------------------------------------------------------
double validateDouble(string&);

//----------------------------------------------------------------------
// display Rectangle data
//----------------------------------------------------------------------
void displayRect(Rectangle& r) {
	string s = r.getName();

	cout << setprecision(2) << fixed;

	// Display passed Rectangle's width, length, and area.
	cout << '\n' << s << ": "
		<< r.getWidth() << " feet wide by "
		<< r.getLength() << " feet long, with "
		<< r.getArea() << " square feet of area.\n\n";
}

//----------------------------------------------------------------------
// - store user's Rectangle dimensions in reference parameters
// - return false when user enters 0 for width, true otherwise
//----------------------------------------------------------------------
bool doAnotherRect(double& width, double& length) {
	string input;

	cout << "In feet, how wide is your house? (0 quits): ";
	cin >> input;
	width = validateDouble(input);

	// 0 width means user wants to quit
	if (!width) {
		return false;
	}

	cout << "In feet, how long is your house? ";
	cin >> input;
	length = validateDouble(input);

	return true;
}

//----------------------------------------------------------------------
// convert user input to a non-negative double value
// if passed string can be converted to a double value then
// return the absolute value, otherwise return 0
//----------------------------------------------------------------------
double validateDouble(string& input) {
	double d = strtod(input.c_str(), nullptr);

	return d >= 0 ? d : -d;
}

