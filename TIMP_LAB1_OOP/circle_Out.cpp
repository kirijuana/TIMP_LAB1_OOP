#include "stdafx.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод параметров круга
	void circle::Out(ofstream &ofst) {
		ofst << "It is Circle: x = "
			<< x << ", R = " << R
			<< ", Colour = " << colour << ", ";
		shape::Out(ofst);
		ofst << endl;
	}
} // end simple_shapes namespace