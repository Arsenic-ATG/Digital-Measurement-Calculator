#include "../Include/parameter.h"
#include "../Include/Shape_2D.h"

Handle_Exception H_Exp;

void Parameter::one_parameter(){
	cout << termcolor::bright_green << "Specify one parameter of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
    cout << termcolor::bright_white << dis.one_parameter_text(Shape_Value); cin >> first_parameter;
    cout << termcolor::reset;
    H_Exp.check_if_user_entered_string_and_shape_3D(is_3D);

	if (H_Exp.check_one_condition(first_parameter)){
		cout << termcolor::bright_red << H_Exp.negative_number_error_message << termcolor::reset;
		one_parameter();
    } else if (Shape_Value == 1 && dimension == "2D"){
        Square sqrt;
        filter_measurement_type2D(sqrt.Asquare(first_parameter), sqrt.Psquare(first_parameter));
    } else if (Shape_Value == 4 && dimension == "2D"){
        Circle cir;
        filter_measurement_type2D(cir.ACircle(first_parameter), cir.PCircle(first_parameter));
    } else if (Shape_Value == 1 && dimension == "3D"){
        Cube cuba;
        filter_measurement_type3D(cuba.SACube(first_parameter), cuba.VCube(first_parameter));
    } else if (Shape_Value == 3 && dimension == "3D"){
        Sphere speed;
        filter_measurement_type3D(speed.SASphere(first_parameter), speed.VSphere(first_parameter));
    } else if (Shape_Value == 4 && dimension == "3D"){
        Hemisphere half_brain;
        filter_measurement_type3D(half_brain.CSAHemisphere(first_parameter), half_brain.TSAHemisphere(first_parameter), half_brain.VHemisphere(first_parameter));
    } else {
        Triangle trio;
        cout << termcolor::bright_yellow << dis.output << trio.AofETriangle(first_parameter) << termcolor::reset;
    }
	dis.select_dimension(dimension);
}
