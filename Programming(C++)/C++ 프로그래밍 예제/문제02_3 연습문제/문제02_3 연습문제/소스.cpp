#include <iostream>
using namespace std;


void SwapPointer(int*(& ref1), int*(& ref2)) { //&ref1�� ptr1�� ��������. �� ref1 = ptr1 

	int temp;
	temp = *ref1; //*ptr�� , �� num1�� �ּҰ��� ����Ǿ��ִ°� 5
	*ref1 = *ref2; 
	*ref2 = temp;

}

int main(void) {


	int num1 = 15;
	int* ptr1 = &num1;
	int num2 = 103;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2); // �ּҰ��� �����ϴ� ����. �� �ּҰ��� ���ڷ� ������.


	cout << *ptr1 << ' ' <<*ptr2 << endl;

	return 0;


}