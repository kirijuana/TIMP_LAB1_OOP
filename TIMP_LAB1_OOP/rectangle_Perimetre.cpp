#include "stdafx.h"
#include "rectangle_atd.h"
#include <iostream>;
using namespace std;
namespace simple_shapes {
	// Âûâîä ïàðàìåòðîâ ïðÿìîóãîëüíèêà
	int rectangle::Perimeter() {
		if (x <= 0 || y <= 0)
		{
			cout << "Incorrect rectangle value";
		}
		return x + y;
	}
} // end simple_shapes namespace