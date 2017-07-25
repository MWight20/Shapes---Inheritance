/*
 * Program: assign10
 * Programmer: Michael Wight
 * z-id: z1644029
 * Due Date: 4/20/2016
 *
 *****************************************************************************/
#ifndef H_SHAPE
#define H_SHAPE


/*
    Objective:
	The Shape class is the base class for assignment 10. It serves as a class
	to hold all the base functions, initialized as pure virtual functions.
	every other class in the assignment is derived based from this class.
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
