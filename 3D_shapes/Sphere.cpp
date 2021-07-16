#include "../3D_Shapes/Shape_3D.h"

Sphere::Sphere() {
	cout << str_measure_type;
	cout << "1. Surface Area" << endl;
	cout << "2. Volume" << endl;
	cout << "3. Hemisphere" << endl;
	cout << "4" << exit_str;
	cin >> WhichShape;
	if (WhichShape == 1)
		this->SASphere();
	else if (WhichShape == 2)
		this->VSphere();
	else if (WhichShape == 3)
		Hemisphere();
	else if (WhichShape == 4) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Sphere();
	}
}

void Sphere::SASphere() {
	cout << "specify the radius" << input;
	cin >> Radius;
	Exh.check_if_typed_string();
	if (Radius <= 0.0)
		cout << Exh.error_message;
	else
		cout << 4 * pi * Radius * Radius << endl << endl;
	Shape_3D();
}

void Sphere::VSphere() {
	cout << "specify the radius" << input;
	cin >> Radius;
	Exh.check_if_typed_string();
	if (Radius <= 0.0)
		cout << Exh.error_message;
	else
		cout << output << 4 / 3 * pi * Radius * (Radius * Radius * Radius) << endl << endl;
	Shape_3D();
}
