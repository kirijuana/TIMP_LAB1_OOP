#include "stdafx.h"
#include "shape_atd.h"

using namespace std;

namespace simple_shapes {
	// ���� ���������� ���������� ������

	void Shape::InData(ifstream &ifst) {
		ifst >> density;
	}

	void Shape::Out(ofstream &ofst) {
		ofst << "density = " << density;
	}
}