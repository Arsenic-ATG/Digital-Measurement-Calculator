#ifndef SHAPE_2D_H
#define SHAPE_2D_H

#include "../declarations.h"
#include "../exception_handling.h"

class Shape_2D : public declarations {
public:
	Shape_2D();
	Exception_Handling Exh;
};

/*
    A = Area
    P = Perimeter
*/

class Square : public declarations {
public:
	Exception_Handling Exh;
	Square();
	void Asquare();
	void Psquare();
};

class Rectangle : public declarations {
public:
	Exception_Handling Exh;
	Rectangle();
	void ARectangle();
	void PRectangle();

};

class Parallelogram : public declarations {
public:
	Exception_Handling Exh;
	Parallelogram();
	void AParallelogram();
	void PParallelogram();
};

class Circle : public declarations {
public:
	Exception_Handling Exh;
	Circle();
	void ACircle();
	void PCircle();
};

class Quadrilateral : public declarations {
public:
	Exception_Handling Exh;
	Quadrilateral();
	void PQuadrilateral();
	void AQuadrilateral();
};

class Trapezium : public declarations {
public:
	Exception_Handling Exh;
	Trapezium();
	void ATrapezium();
	void PTrapezium();
};

class Polygon : public declarations {
public:
	Exception_Handling Exh;
	Polygon();
	void APolygon();
	void PPolygon();
};

#endif // SHAPE_2D_H
