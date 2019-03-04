#ifndef __rectangle_atd__
#define __rectangle_atd__
// Требеутся описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// прямоугольник
	class rectangle : public shape
	{
		int x, y; // ширина, высота
		char colour[10];
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		// вывод только прямоугольников
		void OutRect(ofstream &ofst);
		rectangle() {}
	};
} // end simple_shapes namespace
#endif
