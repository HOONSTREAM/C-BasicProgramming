#include <iostream>

using namespace std;

bool IsPositive(int num) {

	if (num <= 0)
		return false;

	else
		return true;

}

int main(void)
{
	bool isPos;
	int num;
	cout << "���ڸ� �Է��Ͻÿ� : " << endl;
	cin >> num;
	 
	isPos = IsPositive(num); // true �϶� 1 , False �϶� 0�� ��ȯ�ϸ� ������ 1,0 (4byte)�ʹ� �ٸ�������. �� ������ ǥ���ϱ����� 1byte �������̴�.

	if (isPos) {
		cout << "Positive Number : " << isPos << endl;
		cout << sizeof(isPos) << endl;

	}
	 else
		cout << "Negative Number" << endl;
	

	return 0;

	}
