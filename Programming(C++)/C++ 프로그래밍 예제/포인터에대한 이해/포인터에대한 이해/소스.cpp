#include<iostream>
using namespace std;

int main(void) {

	int num1 = 1234;
	double num2 = 3.14;

	int* ptr_num1 = &num1; // �������� ����, &num1 ��,1234�� ����Ǿ� �ִ� �ּҰ��� ��ȯ��.
	// & : ���ۻ���(ampersand)��� �θ���, ������ �̸� �տ� ����ϸ� �ش� ������ �ּҰ��� ��ȯ��.
	// * : ���������� : �������� �̸��̳� �ּ� �տ� ����ϸ� <�����Ϳ� ����� �ּҿ� ����Ǿ� �ִ� ���� ��ȯ>��.

	double* ptr_num2 = &num2;

	cout << "�������� ũ���" << sizeof(ptr_num1) << "�Դϴ�. " << endl;
	cout << "������ ptr_num1�� ����Ű�� �ִ� �ּҴ� " << ptr_num1 << "�Դϴ�." << endl;
	cout << "������ ptr_num1�� ����Ű�� �ִ� �ּҿ� ����� ���� " << *ptr_num1 << "�Դϴ�. ";
	cout << "������ ptr_num2�� ����Ű�� �ִ� �ּҴ� " << ptr_num2 << "�Դϴ�." << endl;
	cout << "������ ptr_num2�� ����Ű�� �ִ� �ּҿ� ����� ���� " << *ptr_num2 << "�Դϴ�";


	return 0;


}