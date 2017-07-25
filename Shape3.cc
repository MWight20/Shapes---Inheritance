/*
 * Program: assign10
 * Programmer: Michael Wight
 * z-id: z1644029
 * Due Date: 4/20/2016
 *
 *****************************************************************************/
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

#include "Shape3.h"
								//box
/*
    Objective:
	default constructor for Box class
******************************************************************************/
Box::Box() : height(0)
{
}


/*
    Objective:
	constructor that takes three double's, used to update the values of
	length, width, and height.
******************************************************************************/
Box::Box(double newLength, double newWidth, double newHeight)
{
	length = newLength;
	width = newWidth;
	height = newHeight;
}

/*
    Objective:
	calculates and returns the area of a Box.
******************************************************************************/
double Box::area() const
{
    return (2 * Rectangle::area() + height * Rectangle::perimeter());
}

/*
    Objective:
	calculates and returns the perimeter of a Box
******************************************************************************/
double Box::perimeter() const
{
	return 0;
}


/*
    Objective:
	print method for Box class
******************************************************************************/
void Box::print() const
{
	cout << "length = " << length << " : ";
	cout << "width = " << width << " : ";
	cout << "height = " << height;
}


/*
    Objective:
	calculates and returns the volume of a Box
******************************************************************************/
double Box::volume() const
{
	return ( height * Rectangle::area() );
}



								//Cube


/*
    Objective:
	default constructor for cube class
******************************************************************************/
Cube::Cube()
{
}

/*
    Objective:
	constructor that takes a signel double paramter; updates the values for
	length and width.
******************************************************************************/
Cube::Cube( double newLength )
{
	length = newLength;
	width = newLength;
}

/*
    Objective:
	calculates and returns the area of a cube.
******************************************************************************/
double Cube::area() const
{
	return (6 * Square::area());
}

/*
    Objective:
	calculates and returns the perimeter of a cube.
******************************************************************************/
double Cube::perimeter() const
{
	return 0;
}


/*
    Objective:
	print method for Cube class
******************************************************************************/
void Cube::print() const
{
	cout << "length = " << length;
}


/*
    Objective:
	calculates and returns the volume of a cube.
******************************************************************************/
double Cube::volume() const
{
	return (length * Square::area());
}



								//Cylinder
/*
    Objective:
	default constructor for Cylinder class
******************************************************************************/
Cylinder::Cylinder() : height(0.0)
{ }


/*
    Objective:
	constructor that takes two double paramters, updates the values of radius
	and height
******************************************************************************/
Cylinder::Cylinder(double newRadius, double newHeight)
{
	radius = newRadius;
	height = newHeight;
}

/*
    Objective:
	calculates and returns the area of a Cylinder.
******************************************************************************/
double Cylinder::area() const
{
	double A1 = height * Circle::perimeter();
	return ( 2 * Circle::area() + A1);
}


/*
    Objective:
	calculates and returns the perimeter of a Cylinder.
******************************************************************************/
double Cylinder::perimeter() const
{
	return 0;
}

/*
    Objective:
	calculates and returns the volume of a Cylinder.
******************************************************************************/
double Cylinder::volume() const
{
	return (height * Circle::area());
}

/*
    Objective:
	print method of Cylinder class.
******************************************************************************/
void Cylinder::print() const
{
	cout << "radius = " << radius << " : ";
	cout << "height = " << height;
}



								//Cone
/*
    Objective:
	default constructor for Cone class
******************************************************************************/
Cone::Cone() : height(0)
{
}

/*
    Objective:
	constructor that takes two double values to update the values for radius
	and height.
******************************************************************************/
Cone::Cone(double newRadius, double newHeight)
{
	radius = newRadius;
	height = newHeight;
}


/*
    Objective:
	calculates and returns the area of a cone.
******************************************************************************/
double Cone::area() const
{
	double s = sqrt(pow(radius, 2) + pow(height, 2));
	double A1 = (1.0/2.0) * s * Circle::perimeter();

	return (Circle::area() + A1);
}

/*
    Objective:
	calculates and returns the perimeter of a cone.
******************************************************************************/
double Cone::perimeter() const
{
    return 0;
}

/*
    Objective:
	calculates and returns the volume of a cone
******************************************************************************/
double Cone::volume() const
{
	return ( (1.0/3.0) * height * Circle::area() );
}

/*
    Objective:
	print method for cone class.
******************************************************************************/
void Cone::print() const
{
	cout << "radius = " << radius << " : ";
	cout << "height = " << height;
}




								//Sphere
/*
    Objective:
	default constructor for sphere class
******************************************************************************/
Sphere::Sphere()
{
}

/*
    Objective:
	constructor that takes a double parameter, used to update the value for
	radius.
******************************************************************************/
Sphere::Sphere(double newRadius)
{
	radius = newRadius;
}

/*
    Objective:
	calculates and returns the area of a sphere.
******************************************************************************/
double Sphere::area() const
{
	return (4.0 * Circle::area());
}

/*
    Objective:
	calculates and returns the volume of a sphere
******************************************************************************/
double Sphere::volume() const
{
	return ( (4.0 / 3.0) * radius * Circle::area() );
}





								//Tetrahedron
/*
    Objective:
	default constructor for Tetrahedron class
******************************************************************************/
Tetrahedron::Tetrahedron()
{
}

/*
    Objective:
	constructor that takes a double parameter, updates the values of len1,
	len2, and len3.
******************************************************************************/
Tetrahedron::Tetrahedron(double newLength)
{
	len1 = newLength;
	len2 = newLength;
	len3 = newLength;
}

/*
    Objective:
	calculates and returns the area of a Tetrahedron.
******************************************************************************/
double Tetrahedron::area() const
{
    return ( sqrt(3.0) * pow(len1, 2) );
}

/*
    Objective:
	calculates and returns the perimeter of a Tetrahedron
******************************************************************************/
double Tetrahedron::perimeter() const
{
	return 0;
}

/*
    Objective:
	calculates and returns the volume of a tetrahedron
******************************************************************************/
double Tetrahedron::volume() const
{
	return ( (pow(len1, 3)) / (6.0 * sqrt(2)) );
}

