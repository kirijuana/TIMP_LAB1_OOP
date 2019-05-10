#ifndef __circle_atd__
#define __circle_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// �����������
	class circle : public shape {
		int x, y, R; // ������ � ���������� ������ �����
		char colour[10];
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		int Perimeter(); // ���������� ���������
		circle() {}
	};
} // end simple_shapes namespace
#endif