#include "stdafx.h"
#include "triangle_atd_.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Ââîä ïàðàìåòðîâ òðåóãîëüíèêà
	void triangle::InData(ifstream &ifst) {
		if (a <= 0 || b <= 0 || c <= 0)
		{
			cout << "Incorrect triangle value";
		}
		ifst >> a >> b >> c >> colour;
	}
} // end simple_shapes namespace