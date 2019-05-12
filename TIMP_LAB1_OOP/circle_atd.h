#ifndef __circle_atd__
#define __circle_atd__
#include "shape_atd.h"

namespace simple_shapes {
	class Circle : public Shape {
		int x, y, R; // ������ � ���������� ������ �����
		char colour[10];
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		int Perimeter(); // ���������� ���������
		Circle() {}
	};
} // end simple_shapes namespace
#endif