#include "stdafx.h"
#include "container_atd.h"

using namespace std;

namespace simple_shapes {
	// Вывод содержимого контейнера
	void Container::Out(ofstream &ofst) {
		ofst << "Container contents " << len
			<< " elements." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
			ofst << "perimeter = "
				<< cont[i]->Perimeter() << endl;
		}
	}
} // end simple_shapes namespace