#ifndef __triangle_atd__
#define __triangle_atd__
// Требуется описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// треугольник
	class triangle : public shape {
		int a,b,c; // радиус и координата центра круга
		char colour[10];
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		triangle() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif