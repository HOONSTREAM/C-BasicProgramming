#include "���.h"

void calculator::SetValue(double x, double y) { // �� ���� �޾Ƽ� a�� b�� ����
	
	cout << "�� ���� �Է��ϼ���. �� ���� ���Ⱑ �ʿ��մϴ�. : ";
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

	cout << "��������Ƚ�� : " << count1 << endl;
	cout << "��������Ƚ�� : " << count2 << endl;
	cout << "����������Ƚ�� : " << count3 << endl;


}
