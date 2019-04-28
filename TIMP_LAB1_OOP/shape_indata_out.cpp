#include "stdafx.h"
#include "shape_atd.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "rectangle_atd.h"
#include "circle_atd.h"
#include "triangle_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод параметров обобщенной фигуры

	void shape::InData(ifstream &ifst) {
		ifst >> angle;
	}

	void shape::Out(ofstream &ofst) {
		ofst << "angle = " << angle;
	}
}