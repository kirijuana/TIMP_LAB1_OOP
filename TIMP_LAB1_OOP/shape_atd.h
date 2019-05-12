#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {
	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class shape {
	public:
		// иденитфикаци€, порождение и ввод фигуры из потока
		static shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0; // ввод
		virtual void Out(ofstream &ofst) = 0; // вывод
		// мультиметод
		virtual void MultiMethod(shape *other, ofstream &ofst) = 0;
		virtual void MMRect(ofstream &ofst) = 0;
		virtual void MMCircle(ofstream &ofst) = 0;
		virtual void MMTriangle(ofstream &ofst) = 0;
	};
} // end simple_shapes namespace
#endif