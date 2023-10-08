//디폴트 값 예제
#include<iostream>

int Adder(int num1=5, int num2=7) // 매개변수에 디폴트값(default)을 지정, 인자를 전달하지 않을 시, num1의 5와 num2의 7이 전달된 것으로 간주하는것.
{

	return num1 + num2;

}


int main(void) {

	
	std::cout << Adder() << std::endl; // 인자값이 없으므로 디폴트값 5,7이 Adder 함수에 전달된다.
	std::cout << Adder(1) << std::endl; // 첫번째 매개변수를 1로 설정한 것. 두번째 매개변수는 디폴트값 7이 반영되어 8이 결과값으로 나온다.
	std::cout << Adder(3, 5) << std::endl; // 매개변수 1 : 3 , 매개변수 2 : 5






	return 0;

}