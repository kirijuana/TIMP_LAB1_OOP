#include "stdafx.h"
#include "triangle_atd.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	
	int triangle::Perimeter() {
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
		if (a + b + c <= 0)
		{
			cout << "No roots perimeter rectangle!" << endl;
			exit(1);
			return 0;
		}
		return a + b + c;
	}
} // end simple_shapes namespace