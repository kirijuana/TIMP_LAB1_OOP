#include "stdafx.h"
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ��������������
	void rectangle::MultiMethod(shape *other, ofstream &ofst) {
		other->MMRect(ofst);
	}
} // end simple_shapes namespace