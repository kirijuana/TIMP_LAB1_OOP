#ifndef __container_atd__
#define __container_atd__
#include "shape_atd.h"
namespace simple_shapes {
	// ���������� ��������� �� ������ ����������� �������
	class Container
	{
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		Shape *cont[max_len];
	public:
		void In(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		void OutRect(ofstream &ofst);
		void Sort(); // ���������� ����������
		void Clear(); // ������� ���������� �� �����
		Container(); // ������������� ����������

		~Container() 
		{ 
			Clear(); 
		}
	};
} // end simple_shapes namespace
#endif
