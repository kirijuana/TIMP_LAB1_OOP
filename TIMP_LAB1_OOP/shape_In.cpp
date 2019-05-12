#include "stdafx.h"
#include "shape_atd.h"
#include "rectangle_atd.h"
#include "circle_atd.h"
#include "triangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ¬вод параметров обобщенной фигуры
	Shape* Shape::In(ifstream &ifst) {
		Shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new Rectangle;
			break;
		case 2:
			sp = new Circle;
			break;
		case 3:
			sp = new Triangle;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
} // end simple_shapes namespace