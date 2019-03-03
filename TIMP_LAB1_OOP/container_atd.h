#ifndef __container_atd__
#define __container_atd__
#include "shape_atd.h"
namespace simple_shapes {
	// ���������� ��������� �� ������ ����������� �������
	class container
	{
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		shape *cont[max_len];
	public:
		void In(ifstream &ifst);
		void Out(ofstream &ofst);
		// ����� ����� � ���������
		void Perimeter(ofstream &ofst);
		void Clear();
		void Sort(); // ���������� ����������
		container();
		~container() { Clear(); }
	};
	//--------------
} // end simple_shapes namespace
#endif