// Вызов мультиметода для элементов контейнера
#include "stdafx.h"
#include "shape_atd.h"
#include "container_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод содержимого контейнера
	void container::MultiMethod(ofstream &ofst) {
		ofst << "Multimethod." << endl;
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				cont[i]->MultiMethod(cont[j], ofst);
				cont[i]->Out(ofst);
				cont[j]->Out(ofst);
			}
		}
	}
} // end simple_shapes namespace
