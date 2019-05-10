#ifndef __circle_atd__
#define __circle_atd__
// Требуется описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// треугольник
	class circle : public shape {
		int x, y, R; // радиус и координата центра круга
		char colour[10];
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		int Perimeter(); // вычисление периметра
		circle() {}
	};
} // end simple_shapes namespace
#endif