#include "stdafx.h"
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод параметров прямоугольника
	int rectangle::Perimeter() {
		return x + y;
	}
} // end simple_shapes namespace