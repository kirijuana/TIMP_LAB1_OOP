#include "stdafx.h"
#include "triangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ¬вод параметров треугольника
	void Triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
		Shape::InData(ifst);
	}
} // end simple_shapes namespace