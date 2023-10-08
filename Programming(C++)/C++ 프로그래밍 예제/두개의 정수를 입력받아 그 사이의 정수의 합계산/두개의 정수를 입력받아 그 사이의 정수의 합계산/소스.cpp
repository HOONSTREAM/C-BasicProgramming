#include <iostream>

int main(void) {

	int val1, val2;

	int result = 0;
	std::cout << "두개의 숫자를 입력하시오 :  ";
	std::cin >> val1 >> val2; // 따로 개행을 하지 않아도 연속적 순서로 변수 산입이 가능하다. (std::cin<<)

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result = +i;
	}


	std::cout << "두 수 사이의 정수의 합 :  " << result << std::endl; // std::cout 로 출력을 실행하고 std::endl로 개행, result값 산입 
	// C로 치면 printf("두수 사이의 정수의 합 : %d ",result); 가 된다.

	return 0;

	}
	
