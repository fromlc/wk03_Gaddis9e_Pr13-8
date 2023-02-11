//------------------------------------------------------------------------------
// Rectangle.cpp : class definition
// 
// Gaddis 9E Rectangle version 4, pp. 759-761
// This version has an overload constructor that accepts arguments.
// 
// Author: Tony Gaddis
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "Rectangle.h"
#include "rectio.h"

//------------------------------------------------------------------------------
// default Rectangle dimensions
//------------------------------------------------------------------------------
constexpr double DEFAULT_WIDTH = 10.0;
constexpr double DEFAULT_LENGTH = 15.0;

//------------------------------------------------------------------------------
// default constructor
// - sets default width and length
//------------------------------------------------------------------------------
Rectangle::Rectangle() :
	width(DEFAULT_WIDTH), length(DEFAULT_LENGTH) {}

//------------------------------------------------------------------------------
// overload constructor
// - sets width and length to absolute values of parameters
//------------------------------------------------------------------------------
Rectangle::Rectangle(const string& s, double w, double len) {
	name = s;
	w >= 0 ? width = w : width = -w;
	len >= 0 ? length = len : length = -len;
}

//------------------------------------------------------------------------------
// sets member variable width to the absolute value of parameter
//------------------------------------------------------------------------------
void Rectangle::setWidth(double w) {
	width = w >= 0 ? w : -w;
}

//------------------------------------------------------------------------------
// sets member variable length to the absolute value of parameter
//------------------------------------------------------------------------------
void Rectangle::setLength(double len) {
	length = len >= 0 ? len : -len;
}

//------------------------------------------------------------------------------
// sets member variable name
//------------------------------------------------------------------------------
void Rectangle::setName(const string& s) { name = s; }

//------------------------------------------------------------------------------
// returns the value of member variable width
//------------------------------------------------------------------------------
double Rectangle::getWidth() const { return width; }

//------------------------------------------------------------------------------
// returns the value of member variable length
//------------------------------------------------------------------------------
double Rectangle::getLength() const { return length; }

//------------------------------------------------------------------------------
// returns the value of member variable name
//------------------------------------------------------------------------------
string Rectangle::getName() const { return name; }

//------------------------------------------------------------------------------
// calculates and returns the area of the rectangle instance
//------------------------------------------------------------------------------
double Rectangle::getArea() const { return width * length; }
