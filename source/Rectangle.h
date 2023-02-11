//----------------------------------------------------------------------
// Rectangle.h : class declaration
// 
// Gaddis 9E Rectangle version 4, pp. 759-761
// This version has an overload constructor that accepts arguments.
// 
// Author: Tony Gaddis
// Modified by: Prof. Linda C
//----------------------------------------------------------------------
#ifndef RECTANGLE_H     // include guard, alternative to #pragma once
#define RECTANGLE_H

#include <string>
using std::string;

class Rectangle {
private:
    double width;
    double length;
    string name;

public:
    // default constructor
    Rectangle();
    // overload Constructor
    Rectangle(const string&, double, double);
    
    // setters
    void setWidth(double);
    void setLength(double);
    void setName(const string&);
      
    // getters
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    string getName() const;
};
#endif // RECTANGLE_H (end include guard)