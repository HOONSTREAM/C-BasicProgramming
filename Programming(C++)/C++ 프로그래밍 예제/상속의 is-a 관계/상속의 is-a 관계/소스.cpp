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

		cout << "��û ������ ����մϴ�." << endl;

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
			cout << "������ �ʿ��մϴ�." << endl;

			return;

		}
		cout << "�̵��ϸ鼭";
		calculate();
		usebattery();

	}

	int GetBatteryInfo() {


		cout << "���͸� �ܷ� : " << battery << "%"<<endl;
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

			cout << "������ �ʿ��մϴ�. " << endl;

			return;
		}

		if (strcmp(regstPenModel, peninfo) != 0) { //���ڿ����Լ�, 0����ȯ�ϸ� �� ���ڿ��� ���ٰ� �Ǵ��Ѵ�.

			cout << "��ϵ� ���� �ƴմϴ�.";
			return;

		}

		else
		cout << "�ʱ⳻���� ó���մϴ�. " << endl;
		usebattery();

 }
};


int main(void) {

	laptop p1("�̽���", 100);
	p1.calculate();
	Tablelaptop p2("��Ҷ�", 100, "LES-234-1243");
	p2.MovingCal();
	p2.Write("LES-234-1243");

	cout << "�̽����� ";
	p1.GetBatteryInfo();
	cout << "��Ҷ��� ";
	p2.GetBatteryInfo();


	return 0;


}