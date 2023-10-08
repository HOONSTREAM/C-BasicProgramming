#include<iostream>
using namespace std;

int main(void) {

	int num1 = 1234;
	double num2 = 3.14;

	int* ptr_num1 = &num1; // 포인터의 선언, &num1 즉,1234가 저장되어 있는 주소값을 반환함.
	// & : 앰퍼샌드(ampersand)라고도 부르며, 변수의 이름 앞에 사용하며 해당 변수의 주소값을 반환함.
	// * : 참조연산자 : 포인터의 이름이나 주소 앞에 사용하며 <포인터에 저장된 주소에 저장되어 있는 값을 반환>함.

	double* ptr_num2 = &num2;

	cout << "포인터의 크기는" << sizeof(ptr_num1) << "입니다. " << endl;
	cout << "포인터 ptr_num1가 가리키고 있는 주소는 " << ptr_num1 << "입니다." << endl;
	cout << "포인터 ptr_num1에 가리키고 있는 주소에 저장된 값은 " << *ptr_num1 << "입니다. ";
	cout << "포인터 ptr_num2가 가리키고 있는 주소는 " << ptr_num2 << "입니다." << endl;
	cout << "포인터 ptr_num2에 가리키고 있는 주소에 저장된 값은 " << *ptr_num2 << "입니다";


	return 0;


}