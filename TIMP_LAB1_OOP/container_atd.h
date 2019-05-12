#ifndef __container_atd__
#define __container_atd__
#include "shape_atd.h"
namespace simple_shapes {
	// Простейший контейнер на основе одномерного массива
	class Container
	{
		enum { max_len = 100 }; // максимальная длина
		int len; // текущая длина
		Shape *cont[max_len];
	public:
		void In(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		void OutRect(ofstream &ofst);
		void Sort(); // сортировка контейнера
		void Clear(); // очистка контейнера от фигур
		Container(); // инициализация контейнера

		~Container() 
		{ 
			Clear(); 
		}
	};
} // end simple_shapes namespace
#endif
