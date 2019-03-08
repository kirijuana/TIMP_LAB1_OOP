#include "stdafx.h"
#include "container_atd.h"

using namespace std;
namespace simple_shapes {
	// Âûâîä ñîäåðæèìîãî êîíòåéíåðà
	void container::OutRect(ofstream &ofst) {
		ofst << "Only rectangles." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->OutRect(ofst);
		}
	}
} // end simple_shapes namespace