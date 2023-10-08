// 함수 오버로딩에 대한 예제 , 매개변수의 선언형태를 달리하여 동일한 이름의 함수 정의를 허용한다.
#include <iostream>

void MyFunc(void) {

	std::cout << "MyFunc(void) called" << std::endl;

}

void MyFunc(char c) {

	std::cout << "MyFunc(char c) called" << std::endl;

}

void MyFunc(int a, int b) {
	
	std::cout << "MyFunc(int a,int b) called" << std::endl;


}

int main(void) {

	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);

	return 0;

}