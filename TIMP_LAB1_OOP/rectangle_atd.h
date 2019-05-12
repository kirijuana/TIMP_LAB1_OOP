#ifndef __rectangle_atd__
#define __rectangle_atd__
#include "shape_atd.h"

namespace simple_shapes {
	class Rectangle : public Shape
	{
		int x, y; // ������, ������
		char colour[10];
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		// ����� ������ ���������������
		void OutRect(ofstream &ofst);
		int Perimeter();
		Rectangle() {}
	};
} // end simple_shapes namespace
#endif
