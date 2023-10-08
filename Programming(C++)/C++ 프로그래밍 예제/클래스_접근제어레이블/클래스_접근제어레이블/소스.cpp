#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996) //C4996 에러 해결
// 속성 -> 준수모드 -> 아니오 E0167 에러 해결 char" 형식의 인수가 "const char *" 형식의 매개 변수와 호환되지 않습니다..
namespace CAR_CONST {

	enum
	{
		ID_LEN = 20,// 유저아이디 길이
		MAX_SPD = 200, // 최고속도
		FUEL_STEP = 2, // 엑셀을 밟으면 감소하는 연료량 (%)
		ACC_STEP = 10, // 엑셀을 한번 밟으면 증가하는 속도치
		BRK_STEP = 10 // 브레이크를 한번 밟으면 감소하는 속도치
	};
}

class car
{
private :
	char gamerID[CAR_CONST::ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료량
	int curspeed; // 현재 속도

public :
	void InitMembers(char* ID, int fuel);
	void showCarstate();
	void Accel();
	void Break();

};

void car::InitMembers(char* ID, int fuel) {

	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curspeed = 0;

}

void car::showCarstate() {

	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재 속도 : " << curspeed << "Km/h" << endl;
}

void car::Accel()
{
	if (fuelGauge <= 0)
		return; // 0보다 작거나 같으면 가속하지않고 리턴한다.
	else
		fuelGauge -= CAR_CONST::FUEL_STEP; // 연료량 2% 감소

	if (curspeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {

		curspeed = CAR_CONST::MAX_SPD;
		return;

	}
	curspeed += CAR_CONST::ACC_STEP; // 엑셀을 밟았으므로 속도를 증가시킨다.
}

void car::Break() {
	if (curspeed < CAR_CONST::BRK_STEP) {
		// 브레이크 한번밟았을때 감소하는 수치보다 작으면 속도는 0 으로 지정하고 리턴시킨다.
		curspeed = 0;
		return;

	}
	curspeed -= CAR_CONST::BRK_STEP;

}


int main(void) {

	car run99;
	run99.InitMembers("Audi TT", 100);
	run99.Accel();
	run99.showCarstate();





	return 0;

}
