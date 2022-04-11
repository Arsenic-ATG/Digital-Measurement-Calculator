#ifndef DISPLAY_H
#define DISPLAY_H

#include "../declarations.h"

class Display {
public:

	declarations var;
	string Shape_Name;

	const string exit_str = ". exit the program\n";
    const string switch_to_3D = ". switch to 3D\n";
    const string switch_to_2D = ". Switch to 2D\n";

	bool dimension_compare2D(string parameter);
    bool dimension_compare3D(string parameter);
    bool user_typed_exit(string parameter);

    void enter_dimension();
	void select_dimension(string dimensional);
    void list_2D_Shapes_text();
    void list_3D_Shapes_text();
	void measurement_type_2D_text();
	void measurement_type1_3D_text();
	void measurement_type2_3D_text();

private:

};

#endif
