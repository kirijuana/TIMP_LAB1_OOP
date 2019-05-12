#ifndef __triangle_atd__
#define __triangle_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// �����������
	class circle : public shape {
		int x, y, R; // ������ � ���������� ������ �����
		char colour[10];
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		// �����������
		void MultiMethod(shape *other, ofstream &ofst);
		void MMRect(ofstream &ofst);
		void MMCircle(ofstream &ofst);
		circle() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif