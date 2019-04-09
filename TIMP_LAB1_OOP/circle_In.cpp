#include "stdafx.h"
#include "circle_atd.h"
#include <iostream>

using namespace std;
namespace simple_shapes {
	// ¬вод параметров треугольника
	void circle::InData(ifstream &ifst) {
		if (x <= 0 || R <= 0)
		{
			cout << "Incorrect rectangle value";
		}
		ifst >> x >> R >> colour;
		shape::InData(ifst);
	}
} // end simple_shapes namespace