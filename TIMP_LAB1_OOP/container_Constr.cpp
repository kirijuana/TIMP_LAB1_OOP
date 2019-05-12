#include "stdafx.h"
#include "container_atd.h"

namespace simple_shapes {
	// ������������� ����������
	Container::Container() : len(0) { }
	
	// ������� ���������� �� ���������
	void Container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}
} // end simple_shapes namespace