
#ifndef SHAPE2_H
#define SHAPE2_H

#include "Shape.h"

							//rectangle
/*
    Objective:
	contains all the class methods for Rectangle class; derives from 'shape'
******************************************************************************/
class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(double, double );
	Rectangle(const Rectangle&);
	~Rectangle();
	Rectangle& operator=(const Rectangle&);
	Rectangle& operator+=(const Rectangle&);

    double perimeter() const;
	double area() const;
	void print() const;

protected:
	double length;
	double width;
};

							//circle
/*
    Objective:
	contains all the class methods for Circle class; derives from shape
******************************************************************************/
class Circle : public Shape {
public:
	Circle();
	Circle(double radius);
	Circle(const Circle&);
	~Circle();
	Circle& operator=(const Circle&);
	Circle& operator+=(const Circle&);

	double perimeter() const;
	double area() const;
	void print() const;

protected:
	double radius;
};

							//triangle
/*
    Objective:
	contains all the class methods for Triangle class; derives from shape
******************************************************************************/
class Triangle : public Shape {
public:
	Triangle();
	Triangle(double len1, double len2, double len3 );
    Triangle(const Triangle&);
	~Triangle();
	Triangle& operator=(const Triangle&);
	Triangle& operator+=(const Triangle&);

	double perimeter() const;
	double area() const;
	void print() const;

protected:
	double len1;
	double len2;
	double len3;
};

							//square
/*
    Objective:
	contains all the class methods for Square class; derives from Rectangle
******************************************************************************/
class Square :public Rectangle {
public:
	Square();
	Square(double);
    double perimeter() const;
	double area() const;
	void print() const;
};


							//rightTriangle
/*
    Objective:
	contains all the class methods for rightTriangle class; derives from Triangle
******************************************************************************/
class rightTriangle : public Triangle {
public:
	rightTriangle();
	rightTriangle(double, double);
	void print() const;

};

							//equTriangle
/*
    Objective:
	contains all the class methods for equTriangle class; derives from Triangle
******************************************************************************/
class equTriangle : public Triangle {
public:
	equTriangle();
	equTriangle(double);
	void print() const;

};




#endif
