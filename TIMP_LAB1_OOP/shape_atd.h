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
		int angle;
	public:
		static shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst);
		virtual void Out(ofstream &ofst);
		virtual int Perimeter() = 0; // вычисление периметра
		virtual void OutRect(ofstream &ofst);
		bool Compare(shape &other);
	protected:	
	shape() {};
	};


} // end simple_shapes namespace
#endif
