#include <iostream>
using namespace std;

// �������� ȣ��, ������ ���� ȣ�� ( �ּҰ�, ������ ) �� �����ؾ��Ѵ�. 
void PlusVal(int &ref) {


	ref = ref + 1;


}

void SwapVal(int& ref2) {

	ref2 = -ref2;

}
int main(void) {

	int val1 = 10;
	PlusVal(val1);

	cout << "val1 : " << val1 << endl;

	int val2 = 5;
	SwapVal(val2);
	cout << "Val2 : " << val2 << endl;


	return 0;

}

