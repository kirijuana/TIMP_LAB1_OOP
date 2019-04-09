#include "stdafx.h"
#include "triangle_atd_.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Ââîä ïàðàìåòðîâ òðåóãîëüíèêà
	void triangle::InData(ifstream &ifst) {
		if (a < 0)
		{
			cout << "Incorrect rectangle value - a < 0";
		}
		if (a == 0)
		{
			cout << "Incorrect rectangle value - a = 0";
		}
		if (b == 0)
		{
			cout << "Incorrect rectangle value - b = 0";
		}
		if (b < 0)
		{
			cout << "Incorrect rectangle value - b < 0";
		}
		if (c == 0)
		{
			cout << "Incorrect rectangle value - c = 0";
		}
		if (c < 0)
		{
			cout << "Incorrect rectangle value - c < 0";
		}
		ifst >> a >> b >> c >> colour;
	}
} // end simple_shapes namespace