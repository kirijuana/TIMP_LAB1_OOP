#include "stdafx.h"
#include "triangle_atd.h"

using namespace std;

namespace simple_shapes {
	// Вывод параметров круга
	void Triangle::Out(ofstream &ofst) {
		ofst << "It is Triangle: a = "
			<< a << ", b = " << b <<", c = " << c << ", Colour = " << colour << ", " ;
		Shape::Out(ofst);
		ofst << endl;
	}
} // end simple_shapes namespace