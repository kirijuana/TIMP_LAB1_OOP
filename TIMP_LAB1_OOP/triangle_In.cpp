#include "stdafx.h"
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров треугольника
	void triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
	}
} // end simple_shapes namespace