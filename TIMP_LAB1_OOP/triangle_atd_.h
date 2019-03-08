#ifndef __triangle_atd__
#define __triangle_atd__
// Òðåáóåòñÿ îïèñàíèå êëàññà shape
#include "shape_atd.h"
namespace simple_shapes {
	// òðåóãîëüíèê
	class triangle : public shape {
		int a, b, c; // ðàäèóñ è êîîðäèíàòà öåíòðà êðóãà
		char colour[10];
	public:
		// ïåðåîïðåäåëÿåì èíòåðôåéñ êëàññà
		void InData(ifstream &ifst); // ââîä
		void Out(ofstream &ofst); // âûâîä
		int Perimeter(); // âû÷èñëåíèå ïåðèìåòðà
		triangle() {} // ñîçäàíèå áåç èíèöèàëèçàöèè.
	};
} // end simple_shapes namespace
#endif