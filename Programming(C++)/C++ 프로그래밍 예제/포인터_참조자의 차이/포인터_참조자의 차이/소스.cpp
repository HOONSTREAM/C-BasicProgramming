#include <iostream>

using namespace std;

int main(void) {

	int num1 = 10;

	int* ptr1 = &num1; // num1의 주소값을 포인터 ptr1에 저장함. *ptr1을 출력하게되면 *ptr1에 저장되어있는 주소에 저장되어 있는 값을 반환하게 됨.

	cout << "*ptr1 포인터의 주소 : " << &num1 << endl;
	cout << "*ptr1 포인터를 출력하게 되면 : " << *ptr1 << endl;

	int& num2 = num1; // num1에 대한 참조자 num2를 선언한다. num2의 값이 변경되면 num1의 값도 변경된다.
	// 참조자는 자신이 참조하는 변수를 대신할수 있는 또 하나의 이름이다.

	num2 = 3047;


	cout << num1 << endl;
	cout << num2 << endl;















	return 0;

}