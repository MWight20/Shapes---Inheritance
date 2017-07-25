
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::showpoint;

#include <iomanip>
using std::setprecision;

#include <string>
using std::string;

#include <cmath>
#include <math.h>
#define PI (4*atan(1))

#include "Shape2.h"


							//rectangle
/*
    Objective:
	default constructor for Rectangle class
******************************************************************************/
Rectangle::Rectangle() : length(0), width(0)
{
}


/*
    Objective:
	This constructor passes two doubles to update values for length and width
******************************************************************************/
Rectangle::Rectangle(double newLength, double newWidth)
{
	length = newLength;
	width = newWidth;
}

/*
    Objective:
	Copy constructor for Rectangle class.
******************************************************************************/
Rectangle::Rectangle(const Rectangle& rhs)
{
   length = rhs.length;
   width = rhs.width;
}

/*
    Objective:
	destructor for Rectangle class.
******************************************************************************/
Rectangle::~Rectangle()
{
}

/*
    Objective:
	operator overload for Rectangle class.
******************************************************************************/
Rectangle& Rectangle::operator=(const Rectangle& rhs)
{
	if (&rhs == this)
		return *this;

	length = rhs.length;
	width = rhs.width;

	return *this;
}

/*
    Objective:
	append overload for Rectangle class
******************************************************************************/
Rectangle& Rectangle::operator+=(const Rectangle& rhs)
{
	width = width + rhs.width;
	length = length + rhs.length;
	return *this;
}

/*
    Objective:
	calculates and returns the value for the perimeter of a rectangle.
******************************************************************************/
double Rectangle::perimeter() const
{
	return (2 * (length + width));
}


/*
    Objective:
	calculates and returns the value for the area of a rectangle.
******************************************************************************/
double Rectangle::area() const
{
	return (length * width);
}

/*
    Objective:
	print method for rectangle class
******************************************************************************/
void Rectangle::print() const
{
	cout << "length = " << length << " : " << "width = " << width;
}



							//circle
/*
    Objective:
	default contructor for Circle class
******************************************************************************/
Circle::Circle() : radius(0.0)
{
}

/*
    Objective:
	this constructor passes a single double paramter to update the value for
	radius.
******************************************************************************/
Circle::Circle(double newRadius)
{
	radius = newRadius;
}

/*
    Objective:
	copy constructor for Circle class
******************************************************************************/
Circle::Circle(const Circle& rhs)
{
	radius = rhs.radius;
}

/*
    Objective:
	destructor for Circle class
******************************************************************************/
Circle::~Circle()
{
}


/*
    Objective:
	assignment operator overload for circle class
******************************************************************************/
Circle& Circle::operator=(const Circle& rhs)
{
    if (&rhs == this)
		return *this;
	radius = rhs.radius;
	return *this;
}


/*
    Objective:
	append operator overload for Circle class
******************************************************************************/
Circle& Circle::operator+=(const Circle& rhs)
{
	radius = radius + rhs.radius;
	return *this;
}


/*
    Objective:
	calculates and returns the value of perimeter for a circle
******************************************************************************/
double Circle::perimeter() const
{
	double result = 2 * PI * radius;
	return result;
}

/*
    Objective:
	calculates and returns the value of area for a circle
******************************************************************************/
double Circle::area() const
{
	return (PI *(pow(radius, 2.0)));
}

/*
    Objective:
	print method for Circle class.
******************************************************************************/
void Circle::print() const
{
	cout << "radius = " << radius;
}


							//triangle
/*
    Objective:
	default constructor for Triangle class
******************************************************************************/
Triangle::Triangle() : len1(0.0), len2(0.0), len3(0.0)
{
}


/*
    Objective:
	this constructor updates the values of len1, len2, and len3 from three
	double parameters.
******************************************************************************/
Triangle::Triangle(double newLen1, double newLen2, double newLen3)
{
	len1 = newLen1;
	len2 = newLen2;
	len3 = newLen3;
}

/*
    Objective:
	copy constructor for Triangle class
******************************************************************************/
Triangle::Triangle(const Triangle& rhs)
{
	len1 = rhs.len1;
	len2 = rhs.len2;
	len3 = rhs.len3;
}

/*
    Objective:
	destructor for Triangle class
******************************************************************************/
Triangle::~Triangle()
{
}

/*
    Objective:
	assignment operator overload for Triangle class
******************************************************************************/
Triangle& Triangle::operator=(const Triangle& rhs)
{
	if (&rhs == this)
		return *this;

	len1 = rhs.len1;
	len2 = rhs.len2;
	len3 = rhs.len3;

	return *this;
}


/*
    Objective:
	append operator overload for Triangle class
******************************************************************************/
Triangle& Triangle::operator+=(const Triangle& rhs)
{
	len1 = len2 + rhs.len1;
	len2 = len2 + rhs.len2;
	len3 = len3 + rhs.len3;

	return *this;
}

/*
    Objective:
	calculates and returns the perimeter of a Triangle
******************************************************************************/
double Triangle::perimeter() const
{
	return (len1 + len2 + len3);
}

/*
    Objective:
	calculates and returns the area of a triangle.
******************************************************************************/
double Triangle::area() const
{
	double result = 0.0;
	double k = perimeter() / 2;
	result = sqrt( k * (k-len1)*(k-len2)*(k-len3));
	return result;
}

/*
    Objective:
	print method for Triangle class
******************************************************************************/
void Triangle::print() const
{
	cout << "a = " << len1;
	cout << " b = " << len2;
	cout << " c = " << len3;
}


							//square

/*
    Objective:
	default constructor for Square class
******************************************************************************/
Square::Square()
{
}

/*
    Objective:
	constructor that takes one double argument to update the value's of
	length and width.
******************************************************************************/
Square::Square(double newLength)
{
	length = newLength;
	width = newLength;
}


/*
    Objective:
	calculates and returns the perimeter of a Square
******************************************************************************/
double Square::perimeter() const
{
	return ( 2 * (length + width)) ;
}


/*
    Objective:
	calculates and returns the area of a Square.
******************************************************************************/
double Square::area() const
{
	return ( length * width );
}

/*
    Objective:
	print method for Square class.
******************************************************************************/
void Square::print() const
{
	cout << "length = " << length;
}


							//rightTriangle
/*
    Objective:
	default constructor for rightTriangle class.
******************************************************************************/
rightTriangle::rightTriangle()
{
}

/*
    Objective:
	constructor that takes two double arguments to update the values of
	len1, len2, and len3.
******************************************************************************/
rightTriangle::rightTriangle( double length, double height)
{
	len1 = length;
	len2 = height;
	len3 = sqrt(pow(len1, 2) + pow(len2, 2));
}


/*
    Objective:
	print method for rightTriangle class
******************************************************************************/
void rightTriangle::print() const
{
	cout << "length = " << len1;
	cout << " : ";
	cout << "height = " << len2;
}


							//equTriangle
/*
    Objective:
	default constructor for equTriangle class
******************************************************************************/
equTriangle::equTriangle()
{
}

/*
    Objective:
	constructor that takes a single double value, used to update the values
	for len1, len2, and len3.
******************************************************************************/
equTriangle::equTriangle(double newLength)
{
	len1 = newLength;
	len2 = newLength;
	len3 = newLength;
}

/*
    Objective:
	print method for equTriangle class
******************************************************************************/
void equTriangle::print() const
{
	cout << "length = " << len1;
}
