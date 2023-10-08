#ifndef __헤더_H__
#define __헤더_H__

// 계산기 구현
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
	double result; // 결과값
	double x; // 삽입되는 첫번째 수
	double y; // 삽입되는 두번째 수
	int count1; // 덧셈이 연산되는 횟수
	int count2; // 뺄셈이 연산되는 횟수
	int count3; // 니눗셈이 연산되는 횟수


public:

	double Add(double x, double y);
	double Div(double x, double y);
	double Min(double x, double y);
	void init();
	void showOpcount();


};

#endif
