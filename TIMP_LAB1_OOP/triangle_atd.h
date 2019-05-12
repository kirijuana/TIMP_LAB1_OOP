#ifndef __triangle_atd__
#define __triangle_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// �����������
	class triangle : public shape {
		int a,b,c; // ������ � ���������� ������ �����
		char colour[10];
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		// �����������
		void MultiMethod(shape *other, ofstream &ofst);
		void MMRect(ofstream &ofst);
		void MMCircle(ofstream &ofst);
		void MMTriangle(ofstream &ofst);
		triangle() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif