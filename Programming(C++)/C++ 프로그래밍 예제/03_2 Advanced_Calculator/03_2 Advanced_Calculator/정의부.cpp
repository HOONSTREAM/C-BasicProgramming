#include "헤더.h"

void calculator::SetValue(double x, double y) { // 두 수를 받아서 a와 b에 저장
	
	cout << "두 수를 입력하세요. 각 수는 띄어쓰기가 필요합니다. : ";
	cin >> x >> y;

	a = x;
	b = y;

}

double calculator::add() {

	count1++;

	return (double)a + (double)b;


}

double calculator::Min() {


	count2++;

	return (double)a - (double)b;

}

double calculator::Div() {

	count3++;

	return (double)a / (double)b;

}

void calculator::init() {

	count1 = 0;
	count2 = 0;
	count3 = 0;

}

void calculator::show() {

	cout << "덧셈연산횟수 : " << count1 << endl;
	cout << "뺄셈연산횟수 : " << count2 << endl;
	cout << "나눗셈연산횟수 : " << count3 << endl;


}
