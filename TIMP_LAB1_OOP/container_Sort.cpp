
#include "stdafx.h"
#include "container_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод содержимого контейнера
	void container::Sort() {
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (cont[i]->Compare(*cont[j])) {
					shape *tmp = cont[i];
					cont[i] = cont[j];
					cont[j] = tmp;
				}
			}
		}
	}
} // end simple_shapes namespace
