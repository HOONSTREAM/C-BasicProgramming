#ifndef __헤더_H__
#define __헤더_H__

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

	double a; // x와 y는 두 수를 받음
	double b;
	int count1; //count 1,2,3 순서대로 PLUS,MIN,DIV 
	int count2;
	int count3;

public:

	void SetValue(double x, double y);
	double add();
	double Min();
	double Div();
	void show(); // 계산횟수
	void init();


};

#endif
