#include "stdafx.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ������������
	void circle::MultiMethod(shape *other,
		ofstream &ofst) {
		other->MMCircle(ofst);
	}
} // end simple_shapes namespace