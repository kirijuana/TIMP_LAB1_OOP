#include "stdafx.h"
#include "container_atd.h"

using namespace std;

namespace simple_shapes {
	// Ввод содержимого контейнера
	void Container::In(ifstream &ifst) {
		while (!ifst.eof()) {
			if ((cont[len] = Shape::In(ifst)) != 0) {
				len++;
			}
		}
	}
} // end simple_shapes namespace

