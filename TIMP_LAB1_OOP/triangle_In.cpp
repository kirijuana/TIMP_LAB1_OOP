#include "stdafx.h"
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ������������
	void triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
		shape::InData(ifst);
	}
} // end simple_shapes namespace