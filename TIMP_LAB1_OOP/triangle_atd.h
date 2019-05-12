#ifndef __triangle_atd__
#define __triangle_atd__
#include "shape_atd.h"

namespace simple_shapes {
	class Triangle : public Shape {
		int a,b,c;
		char colour[10];
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		int Perimeter(); 
		Triangle() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif