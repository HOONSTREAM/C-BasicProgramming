#include <iostream>
using namespace std;

int main(void) {

	int num1, num2;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> num1 >> num2;

	try { //�Ϲ����� ���α׷��� �帧������, ���ܰ� �߻��� �� �ִ� ����

		if (num2 == 0)
			throw num2;
		cout << "�������� �� : " << num1 / num2 << endl;
		cout << "�������� ������ : " << num1 % num2 << endl;
	}

	catch (int expn) {
		cout << "������ 0�̵� �� �����ϴ�. " << endl;
		cout << "���α׷��� �ٽ� �����ϼ���.";


	}

	cout << "end of Main" << endl;

	return 0;

}