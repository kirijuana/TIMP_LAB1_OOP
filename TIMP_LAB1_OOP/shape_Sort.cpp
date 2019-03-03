
#include "stdafx.h"
#include "shape_atd.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "rectangle_atd.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод параметров обобщенной фигуры
	bool shape::Compare(shape &other) {
		return Perimeter() < other.Perimeter();
	}
} // end simple_shapes namespace
