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
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		// мультиметод
		void MultiMethod(shape *other, ofstream &ofst);
		void MMRect(ofstream &ofst);
		void MMCircle(ofstream &ofst);
		void MMTriangle(ofstream &ofst);
		circle() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif