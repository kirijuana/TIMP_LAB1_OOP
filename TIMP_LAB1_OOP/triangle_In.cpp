#include "stdafx.h"
#include "triangle_atd_.h"
using namespace std;
namespace simple_shapes {
	// Ââîä ïàðàìåòðîâ òðåóãîëüíèêà
	void triangle::InData(ifstream &ifst) {
		ifst >> a >> b >> c >> colour;
	}
} // end simple_shapes namespace