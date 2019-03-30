#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {
	// Класс, обобщающает все имеющиеся фигуры.
	// Является абстрактным, обеспечивая, тем самым,
	// проверку интерфейса
	class shape {
		int angle;
	public:
		// иденитфикация, порождение и ввод фигуры из потока
		static shape* In(ifstream &ifst);
		void shape::InData(ifstream &ifst) {
			ifst >> angle;
		}
		virtual int Perimeter() = 0; // âû÷èñëåíèå ïåðèìåòðà
		void shape::Out(ofstream &ofst) {
			ofst << "angle = " << angle;
		}
		bool Compare(shape &other);
		virtual void OutRect(ofstream &ofst);
	protected:
		shape() {};
	};
} // end simple_shapes namespace
#endif
