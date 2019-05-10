#include "stdafx.h"
#include "rectangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника
	void rectangle::InData(ifstream &ifst) {
		ifst >> x >> y >> colour;
		if (ifst.fail())
		{
			cout << "Wrong input rectangle!" << endl;
			exit(1);
		}
		if (x < 0)
		{
			cout << "Incorrect rectangle value - x < 0";
			exit(1);
		}
		if (x == 0)
		{
			cout << "Incorrect rectangle value - x = 0";
			exit(1);
		}
		if (y == 0)
		{
			cout << "Incorrect rectangle value - y = 0";
			exit(1);
		}
		if (y < 0)
		{
			cout << "Incorrect rectangle value - y < 0";
			exit(1);
		}
		shape::InData(ifst);
	}
} // end simple_shapes namespace