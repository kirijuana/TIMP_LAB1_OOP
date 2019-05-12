#include "stdafx.h"
#include "circle_atd.h"

using namespace std;

namespace simple_shapes {
	void Circle::InData(ifstream &ifst) {
		ifst >> x >> y >> R >> colour;
		Shape::InData(ifst);
	}
} // end simple_shapes namespace