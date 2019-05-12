#ifndef __triangle_atd__
#define __triangle_atd__
#include "shape_atd.h"

namespace simple_shapes {
	class Triangle : public Shape {
		int a,b,c;
		char colour[10];
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		int Perimeter(); 
		Triangle() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif