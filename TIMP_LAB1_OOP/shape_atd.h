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
		static shape* In(ifstream &ifst);
		void shape::InData(ifstream &ifst) {
			ifst >> angle;
		}
		//----------------------------------------------------
		// Вывод параметров фигуры
		void shape::Out(ofstream &ofst) {
			ofst << "angle = " << angle;
		}
	protected:
		shape() {};
	};


} // end simple_shapes namespace
#endif