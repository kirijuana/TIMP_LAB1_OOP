#include "stdafx.h"
#include "circle_atd.h"

using namespace std;

namespace simple_shapes {
	void Circle::Out(ofstream &ofst) {
		ofst << "It is Circle: x = "
			<< x << " , y = " << y << ", R = " << R
			<< ", Colour = " << colour << ", ";
		Shape::Out(ofst);
		ofst << endl;
	}
} // end simple_shapes namespace