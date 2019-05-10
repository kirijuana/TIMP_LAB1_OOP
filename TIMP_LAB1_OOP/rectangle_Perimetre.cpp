#include "stdafx.h"
#include "rectangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Вывод параметров прямоугольника
	int rectangle::Perimeter() {
		if (x < 0)
		{
			cout << "Incorrect rectangle value - x < 0";
		}
		if (x == 0)
		{
			cout << "Incorrect rectangle value - x = 0";
		}
		if (y == 0)
		{
			cout << "Incorrect rectangle value - y = 0";
		}
		if (y < 0)
		{
			cout << "Incorrect rectangle value - y < 0";
		}
		if (x + y <= 0)
		{
			cout << "No roots perimeter rectangle!" << endl;
			return 0;
		}
		return x + y;
	}
} // end simple_shapes namespace