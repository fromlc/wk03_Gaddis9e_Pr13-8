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

class Rectangle {
private:
    double width;
    double length;

public:
    // constructors
    Rectangle();                 // Default Constructor
    Rectangle(double, double);   // Overload Constructor
    
    // setters
    void setWidth(double);
    void setLength(double);
      
    // getters
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
#endif // RECTANGLE_H (end include guard)