#ifndef __���_H__
#define __���_H__

#include <iostream>
using namespace std;


enum Menu_Type {

	PLUS = 1,
	MIN,
	DIV,
	SHOW,
	EXIT

};

class calculator {

private:

	double a; // x�� y�� �� ���� ����
	double b;
	int count1; //count 1,2,3 ������� PLUS,MIN,DIV 
	int count2;
	int count3;

public:

	void SetValue(double x, double y);
	double add();
	double Min();
	double Div();
	void show(); // ���Ƚ��
	void init();


};

#endif
