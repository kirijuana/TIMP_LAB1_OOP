#include "stdafx.h"
#include "rectangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ����� ���������� ��������������
	void Rectangle::Out(ofstream &ofst) {
		ofst << "It is Rectangle: x = " << x << ", y = "
			<< y << ", Colour = " << colour << ", ";
		Shape::Out(ofst);
		ofst << endl;
	}
} // end simple_shapes namespace