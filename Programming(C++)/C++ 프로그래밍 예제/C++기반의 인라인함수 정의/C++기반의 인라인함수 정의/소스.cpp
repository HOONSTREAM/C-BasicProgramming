//이 예제에서는 매크로함수를 이용하지않고 C++기반의 인라인 함수의 정의방법을 구현한다.

#include<iostream>

inline int SQUARE(int x) {

	return x* x;

}

int main(void) {


	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	return 0;

}