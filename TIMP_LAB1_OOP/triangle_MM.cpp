#include "stdafx.h"
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {

	void triangle::MultiMethod(shape *other, ofstream &ofst)
	{
		other->MMTriangle(ofst);
	}
} // end simple_shapes namespace