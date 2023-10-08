// 사용자로부터 총 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램을 작성
#include <iostream>

int main(void) {

	int a, b, c, d, e;

	std::cout << "첫 번째 정수 입력 :  ";
	std::cin >> a;

	std::cout << "두 번째 정수 입력 : ";
	std::cin >> b;

	std::cout << "세 번째 정수 입력 : ";
	std::cin >> c;

	std::cout << "네 번째 정수 입력 : ";
	std::cin >> d;

	std::cout << "다섯 번째 정수 입력 : ";
	std::cin >> e;

	int result = a + b + c + d + e; // C언어는 지역번수 선언이 제일 먼저 등장해야하는 반면 C++는 함수 어디든 지역변수 삽입이 가능하다.

	std::cout << "합계 :  " << result << std::endl;


	return 0;


}