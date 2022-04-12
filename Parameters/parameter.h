#ifndef PARAMETER_H
#define PARAMETER_H

#include "../Display/Display.h"
#include "../declarations.h"
#include "../exception_handling.h"
#include "../2D_shapes/Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"

/**********************************************************
    2D_Shape Parameters (P = Perimeter, A = Area)

	one paramter
    1. Square: A: 1 P: 1
    4. Circle: A: 1 P: 1

	two paramters
	2. Rectangle: A: 2 P: 2
    3. Parallelogram: A: 2 P: 2

	four_three_paramters
    5. Quadrilateral: P: 4 A: 3
    6. Trapezium: P: 4 A: 3

	special parameters
	7. Polygon: A: 2 P: 10

***********************************************************/

/***********************************************************
	3D_Shape Parameters (SA = Surface Area, V = Volume, CSA = Curved Surface Area, TSA = Total Surface Area)

    one parameter
	1. Cube: SA: 1 V: 1
    3. Sphere: SA: 1 V: 1

	two parameters
	4. Cynlinder: CSA: 2 TSA: 2 V: 2
    6. Cone: CSA: 2 TSA: 2 V: 2

	special parameters
	2. Cuboid: SA: 3 V: 3
    5. Hemisphere: CSA: 1 TSA: 1 V: 1

************************************************************/

class Parameter
{
    public:
		Parameter(string dimension, int Shape, int measure_type);

		void filter_2D_Shapes(int Which_2D_Shape);
		void filter_3D_Shapes(int Which_3D_Shape);
		void filter_measurement_type();

		double first_parameter;
		double second_parameter;
		double third_parameter;
		double fourth_parameter;

		void one_parameter_2D();
		void two_parameters_2D();
		void three_four_parameters_2D();
		void Special();

		void one_parameter_3D();
		void two_parameters_3D();
		void three_parameters_3D();


    private:
        declarations dec;
        Exception_Handling Exh;
        Display dis;
        int Shape_Value;
};

#endif // PARAMETER_H
