#include <iostream>

using namespace std;

int main(void) {

	int num1 = 10;

	int* ptr1 = &num1; // num1�� �ּҰ��� ������ ptr1�� ������. *ptr1�� ����ϰԵǸ� *ptr1�� ����Ǿ��ִ� �ּҿ� ����Ǿ� �ִ� ���� ��ȯ�ϰ� ��.

	cout << "*ptr1 �������� �ּ� : " << &num1 << endl;
	cout << "*ptr1 �����͸� ����ϰ� �Ǹ� : " << *ptr1 << endl;

	int& num2 = num1; // num1�� ���� ������ num2�� �����Ѵ�. num2�� ���� ����Ǹ� num1�� ���� ����ȴ�.
	// �����ڴ� �ڽ��� �����ϴ� ������ ����Ҽ� �ִ� �� �ϳ��� �̸��̴�.

	num2 = 3047;


	cout << num1 << endl;
	cout << num2 << endl;















	return 0;

}