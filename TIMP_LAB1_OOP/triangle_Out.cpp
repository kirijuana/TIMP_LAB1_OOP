#include "stdafx.h"
#include "triangle_atd_.h"
using namespace std;
namespace simple_shapes {
	// Âûâîä ïàðàìåòðîâ êðóãà
	void triangle::Out(ofstream &ofst) {
		ofst << "It is Triangle: a = "
			<< a << ", b = " << b << ", c = " << c << ", Colour = " << colour << endl;
	}
} // end simple_shapes namespace