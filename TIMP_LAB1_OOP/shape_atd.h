#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {
	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class shape {
		int angle;
	public:
		static shape* In(ifstream &ifst);
		virtual int Perimeter() = 0; // ���������� ���������
		virtual void InData(ifstream &ifst) = 0;
		virtual void Out(ofstream &ofst) = 0;
		void shape::InData(ifstream &ifst) {
			ifst >> angle;
		}
		//----------------------------------------------------
		// ����� ���������� ������
		void shape::Out(ofstream &ofst) {
			ofst << "angle = " << angle;
		}
	protected:
		shape() {};
		virtual void InData(ifstream &ifst) = 0; // ����
		virtual void Out(ofstream &ofst) = 0; // �����
		virtual void OutRect(ofstream &ofst);
	};


} // end simple_shapes namespace
#endif
