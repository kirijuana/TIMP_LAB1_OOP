#include "stdafx.h"
#include "shape_atd.h"
// ���������� ���������� ���������� ��� ���� ���������
// �������������� �������
using namespace std;
namespace simple_shapes {
	// ���� ���������� ���������� ������

	void shape::InData(ifstream &ifst) {
		ifst >> density;
	}

	void shape::Out(ofstream &ofst) {
		ofst << "angle = " << density;
	}
}