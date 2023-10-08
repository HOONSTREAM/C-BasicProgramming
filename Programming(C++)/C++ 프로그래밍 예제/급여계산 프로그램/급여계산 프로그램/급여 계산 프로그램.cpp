// 사원들의 급여 계산 프로그램을 작성한다.
#include <iostream>

int main(void) {

	int base = 50;
	int k; // 이번달 판매 실적
	int bonus; // 최종 산출 월급 (기본급 + 물품 판매 실적의 12%)
	for (;;) {
		std::cout << "이번달 판매 금액을 입력하시오, ( 단원은 만원 단위 ), -1을 입력하면 프로그램을 종료합니다. :  ";
		std::cin >> k;
		if (k < 0) {
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;

		}
		bonus = base + (k * 0.12);
		std::cout << "이번 달 급여 : " << bonus << " 만원" << std::endl;
		
	}
	return 0;

	}



