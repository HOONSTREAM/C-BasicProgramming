#ifndef __���_H__
#define __���_H__

// ���� ����
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
	double result; // �����
	double x; // ���ԵǴ� ù��° ��
	double y; // ���ԵǴ� �ι�° ��
	int count1; // ������ ����Ǵ� Ƚ��
	int count2; // ������ ����Ǵ� Ƚ��
	int count3; // �ϴ����� ����Ǵ� Ƚ��


public:

	double Add(double x, double y);
	double Div(double x, double y);
	double Min(double x, double y);
	void init();
	void showOpcount();


};

#endif
