#include "stdafx.h"
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// ¬вод параметров треугольника
	void circle::InData(ifstream &ifst) {
		ifst >> x >> y >> R >> colour;
		if (ifst.fail())
		{
			cout << "Wrong input circle!" << endl;
			exit(1);
		}
		if (x < 0)
		{
			cout << "Incorrect rectangle value - x < 0";
			exit(1);
		}
		if (R < 0)
		{
			cout << "Incorrect rectangle value - R < 0";
			exit(1);
		}
		if (x == 0)
		{
			cout << "Incorrect rectangle value - x = 0";
			exit(1);
		}
		if (R == 0)
		{
			cout << "Incorrect rectangle value - R = 0";
			exit(1);
		}
		if (y < 0)
		{
			cout << "Incorrect rectangle value - y < 0";
			exit(1);
		}
		if (y == 0)
		{
			cout << "Incorrect rectangle value - y = 0";
			exit(1);
		}
		shape::InData(ifst);
	}
} // end simple_shapes namespace