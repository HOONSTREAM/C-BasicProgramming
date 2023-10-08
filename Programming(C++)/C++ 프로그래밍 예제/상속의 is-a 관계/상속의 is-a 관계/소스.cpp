#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;


class computer {

private :
	char owner[50];

public :
	computer(const char *name) {

		

		strcpy(owner, name);

	}

	void calculate() {

		cout << "요청 내용을 계산합니다." << endl;

	}
};

class laptop : public computer {

private :
	int battery;

public :
	laptop(const char* name, int initchag) : computer(name), battery(initchag) {}

	void charging() {

		battery += 5;
	}

	void usebattery() {

		battery -= 1;

	}

	void MovingCal() {

		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;

			return;

		}
		cout << "이동하면서";
		calculate();
		usebattery();

	}

	int GetBatteryInfo() {


		cout << "배터리 잔량 : " << battery << "%"<<endl;
		return battery;

	}
};

class Tablelaptop : public laptop {

private :

	char regstPenModel[50];

public :
	Tablelaptop(const char* name, int initchag, const char* pen) : laptop(name, initchag) {

		strcpy(regstPenModel, pen);

	}

	void Write(const char* peninfo) {

		if (GetBatteryInfo() < 1) {

			cout << "충전이 필요합니다. " << endl;

			return;
		}

		if (strcmp(regstPenModel, peninfo) != 0) { //문자열비교함수, 0을반환하면 두 문자열은 같다고 판단한다.

			cout << "등록된 펜이 아닙니다.";
			return;

		}

		else
		cout << "필기내용을 처리합니다. " << endl;
		usebattery();

 }
};


int main(void) {

	laptop p1("이승훈", 100);
	p1.calculate();
	Tablelaptop p2("김소라", 100, "LES-234-1243");
	p2.MovingCal();
	p2.Write("LES-234-1243");

	cout << "이승훈의 ";
	p1.GetBatteryInfo();
	cout << "김소라의 ";
	p2.GetBatteryInfo();


	return 0;


}