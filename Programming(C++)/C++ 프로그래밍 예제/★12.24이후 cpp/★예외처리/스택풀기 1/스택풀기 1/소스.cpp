#include<iostream>
using namespace std;

void Divide(int num1, int num2) {

	if (num2 == 0)
		throw num2;
	cout << "�������� �� : " << num1 / num2 << endl;
	cout << "�������� ������ : " << num1 % num2 << endl;
}

int main(void) {

	int num1, num2;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> num1 >> num2;

	try {

		Divide(num1, num2); // (�߿�) �Լ��� ȣ���� 20���� ��ġ�� ���� �����Ϳ� ����ó���� ���� å�ӵ� �Բ� �Ѿ��.
		cout << "�������� ���ƽ��ϴ�" << endl;

	}
	catch (int expn) 
	{

		cout << "������ " << expn << "�� �� �� �����ϴ�. " << endl;
		cout << "���α׷��� �ٽ� �����ϼ��� " << endl;
	}


	return 0;

}


