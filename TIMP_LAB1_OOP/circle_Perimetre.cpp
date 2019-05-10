#include "stdafx.h"
#include "circle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Вывод параметров круга
	int circle::Perimeter() {
		if (R < 0)
		{
			cout << "Incorrect circle value - R < 0";
			exit(1);
		}
		if (R == 0)
		{
			cout << "Incorrect circle value - R = 0";
			exit(1);
		}
		if (R * 2 * 3.14 <= 0)
		{
			cout << "No roots perimeter circle!" << endl;
			exit(1);
			return 0;
		}
		return R*2*3.14;
	}
} // end simple_shapes namespace
