#include "���.h"

double calculator::Add(double x, double y) {

	cout << "�� �� �Է� : " << endl;
	cin >> x >> y;

     	result = x + y;
		count1++;

		return result;
		

	
}

double calculator::Div(double x, double y) {

	cout << "�� �� �Է� : " << endl;
	cin >> x >> y;

	result = x / y;
	count3++;


	return result;
	
}

double calculator::Min(double x, double y) {

	cout << "�� �� �Է� : " << endl;
	cin >> x >> y;

	result = x - y;
	count2++;

	return result;
	

}

void calculator::init() {

	count1 = 0; // ������ ����Ǵ� Ƚ��
	count2 = 0; // ������ ����Ǵ� Ƚ��
	count3 = 0;// �ϴ����� ����Ǵ� Ƚ��
}

	

void calculator::showOpcount() {

	cout << "���� : " << count1 << endl;
	cout << "���� : " << count3 << endl; 
	cout << "������ : " << count2 << endl;


}




