#include "stdafx.h"
#include "triangle_atd_.h"
#include <iostream>
using namespace std;
namespace simple_shapes {
	// Âûâîä ïàðàìåòðîâ êðóãà
	int triangle::Perimeter() {
		if (a <= 0 || b <= 0 || c <= 0)
		{
			cout << "Incorrect triangle value";
		}
		return a + b + c;
	}
} // end simple_shapes namespace
