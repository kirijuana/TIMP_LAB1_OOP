#include "stdafx.h"
#include "rectangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника
	void rectangle::InData(ifstream &ifst) {
		
		if (x <= 0 || y <= 0)
		{
			cout << "Incorrect rectangle value";
		}
		ifst >> x >> y >> colour;
		shape::InData(ifst);
	}
} // end simple_shapes namespace