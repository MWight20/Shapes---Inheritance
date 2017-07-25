
#ifndef SHAPE3_H
#define SHAPE3_H

#include "Shape2.h"
#include "Shape.h"

								//box
/*
    Objective:
	contains all the methods for Box class; derives from Rectangle
******************************************************************************/
class Box : public Rectangle {
public:
	Box(); //default
	Box(double, double, double);

	double area() const;
	double perimeter() const;
	void print() const;
	double volume() const;

private:
	double height;

};

								//Cube
/*
    Objective:
	contains all the methods for Cube class; derives from Square
******************************************************************************/
class Cube : public Square {
public:
	Cube();
	Cube(double);
	double area() const;
	double perimeter() const;
	void print() const;
	double volume() const;

};


								//Cylinder
/*
    Objective:
	contains all the methods for Cylinder class; derives from Circle
******************************************************************************/
class Cylinder : public Circle {
public:
	Cylinder();
	Cylinder(double radius, double height);
	double area() const;
	double perimeter() const;
	double volume() const;
	void print() const;

private:
	double height;

};


								//Cone
/*
    Objective:
	contains all the methods for Cone class; derives from Circle
******************************************************************************/
class Cone : public Circle {
public:
	Cone();
	Cone(double, double);
	double area() const;
	double perimeter() const;
	double volume() const;
	void print() const;

private:
	double height;
};


								//Sphere
/*
    Objective:
	contains all the methods for Sphere class; derives from Circle
******************************************************************************/
class Sphere : public Circle {
public:
	Sphere();
	Sphere(double);
	double area() const;
	double volume() const;

};


								//Tetrahedron
/*
    Objective:
	contains all the methods for Tetrahedron class; derives from equTriangle
******************************************************************************/
class Tetrahedron : public equTriangle {
public:
	Tetrahedron();
	Tetrahedron(double);
	double area() const;
	double perimeter() const;
    double volume() const;

};



#endif
