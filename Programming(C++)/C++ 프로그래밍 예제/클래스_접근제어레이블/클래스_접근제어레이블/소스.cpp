#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996) //C4996 ���� �ذ�
// �Ӽ� -> �ؼ���� -> �ƴϿ� E0167 ���� �ذ� char" ������ �μ��� "const char *" ������ �Ű� ������ ȣȯ���� �ʽ��ϴ�..
namespace CAR_CONST {

	enum
	{
		ID_LEN = 20,// �������̵� ����
		MAX_SPD = 200, // �ְ�ӵ�
		FUEL_STEP = 2, // ������ ������ �����ϴ� ���ᷮ (%)
		ACC_STEP = 10, // ������ �ѹ� ������ �����ϴ� �ӵ�ġ
		BRK_STEP = 10 // �극��ũ�� �ѹ� ������ �����ϴ� �ӵ�ġ
	};
}

class car
{
private :
	char gamerID[CAR_CONST::ID_LEN]; // ������ ID
	int fuelGauge; // ���ᷮ
	int curspeed; // ���� �ӵ�

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

	cout << "������ ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "���� �ӵ� : " << curspeed << "Km/h" << endl;
}

void car::Accel()
{
	if (fuelGauge <= 0)
		return; // 0���� �۰ų� ������ ���������ʰ� �����Ѵ�.
	else
		fuelGauge -= CAR_CONST::FUEL_STEP; // ���ᷮ 2% ����

	if (curspeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {

		curspeed = CAR_CONST::MAX_SPD;
		return;

	}
	curspeed += CAR_CONST::ACC_STEP; // ������ ������Ƿ� �ӵ��� ������Ų��.
}

void car::Break() {
	if (curspeed < CAR_CONST::BRK_STEP) {
		// �극��ũ �ѹ�������� �����ϴ� ��ġ���� ������ �ӵ��� 0 ���� �����ϰ� ���Ͻ�Ų��.
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
