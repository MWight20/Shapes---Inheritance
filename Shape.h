
#ifndef SHAPE_H
#define SHAPE_H


/*
    Objective:
	The Shape class is the base class for the program. It serves as a class
	to hold all the base functions, initialized as pure virtual functions.
	every other class in the program is derived based from this class.
******************************************************************************/
class Shape {
public:
    virtual double area ( ) const = 0;
    virtual double perimeter ( ) const = 0;
    virtual void print ( ) const = 0;

    virtual double volume ( ) const { return 0; }
    virtual ~Shape ( ) { }
};

#endif
