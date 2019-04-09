#include "stdafx.h"
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Âûâîä ïàðàìåòðîâ êðóãà
	int circle::Perimeter() {
		if (R < 0)
		{
			cout << "Incorrect circle value - R < 0";
		}
		if (R == 0)
		{
			cout << "Incorrect circle value - R = 0";
		}
		return R * 2 * 3.14;
	}
} // end simple_shapes namespace
