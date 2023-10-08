#include <iostream>
using namespace std;

// �̸������� �����ϸ鼭 �� ����� ����������� ����ǰ� ���Ǵ� ������� ���� �� �� �����Ƿ� �������� �����Ǿ���.
namespace CAR_CONST {

	enum 
	{
	ID_LEN = 20 ,// �������̵� ����
   MAX_SPD = 200, // �ְ�ӵ�
   FUEL_STEP = 2, // ������ ������ �����ϴ� ���ᷮ (%)
   ACC_STEP = 10, // ������ �ѹ� ������ �����ϴ� �ӵ�ġ
   BRK_STEP = 10 // �극��ũ�� �ѹ� ������ �����ϴ� �ӵ�ġ
	};
}


struct car { //����ü �ȿ� �Լ��� ���� �������ν� �ٸ��������� �Լ��� ȣ���ϴ� �Ǽ��� ���ش�. ��, �ڵ����� ���õ� �����Ϳ� �������ν� �����̰���������.


	char gamerID[CAR_CONST::ID_LEN]; // ������ ID
	int fuelGauge; // ���ᷮ
	int curspeed; // ���� �ӵ�

	void showcarstate(const car& car)
	{

		cout << "������ ID : " << car.gamerID << endl;
		cout << "���ᷮ : " << car.fuelGauge << "%" << endl;
		cout << "���� �ӵ� : " << car.curspeed << "Km/h" << endl;

	}

	void Accel(car& car)
	{
		if (car.fuelGauge <= 0)
			return; // 0���� �۰ų� ������ ���������ʰ� �����Ѵ�.
		else
			car.fuelGauge -= CAR_CONST::FUEL_STEP; // ���ᷮ 2% ����

		if (car.curspeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {

			car.curspeed = CAR_CONST::MAX_SPD;
			return;

		}
		car.curspeed += CAR_CONST::ACC_STEP; // ������ ������Ƿ� �ӵ��� ������Ų��.

	}

	void Break(car& car) {

		if (car.curspeed < CAR_CONST::BRK_STEP) {
			// �극��ũ �ѹ�������� �����ϴ� ��ġ���� ������ �ӵ��� 0 ���� �����ϰ� ���Ͻ�Ų��.
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