#include "stdafx.h"
#include "shape_atd.h"
#include "rectangle_atd.h"
#include "circle_atd.h"
using namespace std;

namespace simple_shapes {
	bool Shape::Compare(Shape &other) {
		return Perimeter() < other.Perimeter();
	}
} // end simple_shapes namespace
