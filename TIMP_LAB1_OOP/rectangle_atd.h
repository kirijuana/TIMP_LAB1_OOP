#ifndef __rectangle_atd__
#define __rectangle_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// �������������
	class rectangle : public shape
	{
		int x, y; // ������, ������
		char colour[10];
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		// ����� ������ ���������������
		void OutRect(ofstream &ofst);
		rectangle() {}
	};
} // end simple_shapes namespace
#endif
