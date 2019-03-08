#include "stdafx.h"
#include "shape_atd.h"
// Íåîáõîäèìà ïîäêëþ÷èòü èíôîðìàöèþ îáî âñåõ èìåþùèõñÿ
// ãåîìåòðè÷åñêèõ ôèãóðàõ
#include "rectangle_atd.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Ââîä ïàðàìåòðîâ îáîáùåííîé ôèãóðû
	bool shape::Compare(shape &other) {
		return Perimeter() < other.Perimeter();
	}
} // end simple_shapes namespace