#include "stdafx.h"
#include "rectangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ¬вод параметров пр€моугольника
	void Rectangle::InData(ifstream &ifst) {
		ifst >> x >> y >> colour;
		Shape::InData(ifst);
	}
} // end simple_shapes namespace