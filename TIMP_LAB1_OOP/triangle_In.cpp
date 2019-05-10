#include "stdafx.h"
#include "triangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ���� ���������� ������������
	void triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
		if (ifst.fail())
		{
			cout << "Wrong input triangle!" << endl;
			exit(1);
		}
		if (a < 0)
		{
			cout << "Incorrect rectangle value - a < 0";
			exit(1);
		}
		if (a == 0)
		{
			cout << "Incorrect rectangle value - a = 0";
			exit(1);
		}
		if (b == 0)
		{
			cout << "Incorrect rectangle value - b = 0";
			exit(1);
		}
		if (b < 0)
		{
			cout << "Incorrect rectangle value - b < 0";
			exit(1);
		}
		if (c == 0)
		{
			cout << "Incorrect rectangle value - c = 0";
			exit(1);
		}
		if (c < 0)
		{
			cout << "Incorrect rectangle value - c < 0";
			exit(1);
		}
		shape::InData(ifst);
	}
} // end simple_shapes namespace