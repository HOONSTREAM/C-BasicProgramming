#include <iostream>
using namespace std;

// 이름공간을 지정하면서 이 상수가 어느영역에서 선언되고 사용되는 상수인지 쉽게 알 수 있으므로 가독성이 증가되었다.
namespace CAR_CONST {

	enum 
	{
	ID_LEN = 20 ,// 유저아이디 길이
   MAX_SPD = 200, // 최고속도
   FUEL_STEP = 2, // 엑셀을 밟으면 감소하는 연료량 (%)
   ACC_STEP = 10, // 엑셀을 한번 밟으면 증가하는 속도치
   BRK_STEP = 10 // 브레이크를 한번 밟으면 감소하는 속도치
	};
}


struct car { //구조체 안에 함수를 같이 묶음으로써 다른영역에서 함수를 호출하는 실수를 없앤다. 즉, 자동차와 관련된 데이터와 묶음으로써 구분이가능해진다.


	char gamerID[CAR_CONST::ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료량
	int curspeed; // 현재 속도

	void showcarstate(const car& car)
	{

		cout << "소유자 ID : " << car.gamerID << endl;
		cout << "연료량 : " << car.fuelGauge << "%" << endl;
		cout << "현재 속도 : " << car.curspeed << "Km/h" << endl;

	}

	void Accel(car& car)
	{
		if (car.fuelGauge <= 0)
			return; // 0보다 작거나 같으면 가속하지않고 리턴한다.
		else
			car.fuelGauge -= CAR_CONST::FUEL_STEP; // 연료량 2% 감소

		if (car.curspeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {

			car.curspeed = CAR_CONST::MAX_SPD;
			return;

		}
		car.curspeed += CAR_CONST::ACC_STEP; // 엑셀을 밟았으므로 속도를 증가시킨다.

	}

	void Break(car& car) {

		if (car.curspeed < CAR_CONST::BRK_STEP) {
			// 브레이크 한번밟았을때 감소하는 수치보다 작으면 속도는 0 으로 지정하고 리턴시킨다.
			car.curspeed = 0;
			return;

		}
		car.curspeed -= CAR_CONST::BRK_STEP;

	}

};


int main(void) {

	car run99 = { "run99",100,0 };
	run99.Accel(run99);
	run99.Accel(run99);
	run99.showcarstate(run99);
	run99.Break(run99);
	run99.showcarstate(run99);
	run99.Accel(run99);
	run99.Accel(run99);
	run99.Accel(run99);
	run99.Accel(run99);
	run99.Accel(run99);
	run99.showcarstate(run99);



	return 0;

}