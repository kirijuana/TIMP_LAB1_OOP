#include "stdafx.h"
#include "triangle_atd.h"

using namespace std;

namespace simple_shapes {
	// ���� ���������� ������������
	void Triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
		Shape::InData(ifst);
	}
} // end simple_shapes namespace