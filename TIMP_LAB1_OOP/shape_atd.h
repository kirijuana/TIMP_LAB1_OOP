#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>

using namespace std;

namespace simple_shapes {
	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class Shape {
		float density;
	public:
		static Shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst);
		virtual void Out(ofstream &ofst);
		virtual int Perimeter() = 0; // ���������� ���������
		virtual void OutRect(ofstream &ofst);
		bool Compare(Shape &other);
	protected:	
	Shape() {};
	};
} // end simple_shapes namespace
#endif
