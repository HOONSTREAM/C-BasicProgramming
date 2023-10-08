#include <iostream>
using namespace std;

class Car {

private : 
	int gasolineGauge;

public :

	Car(int n) : gasolineGauge(n) {

		cout << "Car(int n) : gaseolineGauge ȣ�� " << endl;

	}
	
	~Car() {

		cout << "car �Ҹ��� ȣ��" << endl;

	}

	int GetGasGauge() {

		return gasolineGauge;

	}

};

class HybridCar : public Car
{

private : 
	int electricGauge;

public :

	HybridCar(int n1, int n2) : Car(n1), electricGauge(n2) {

		cout << "HybridCar (int n1,int n2) : Car(n1), electricGauge(n2) ȣ��" << endl;

	}
	int GetElecGauge() {

		return electricGauge;

	}

	~HybridCar() {

		cout << "hybrid car �Ҹ��� ȣ��" << endl;

	}

};


class HybridWaterCar : public HybridCar {

private : 
	int waterGuage;

public : 

	HybridWaterCar(int n, int n1, int n2) : HybridCar(n, n1), waterGuage(n2) {

		cout << "HybridWaterCar(int n, int n1, int n2) : HybridCar(n,n1), waterGuage(n2) ȣ��" << endl;

	}

	void showCurrentGuage()  {

		cout << "�ܿ� ���ָ� : " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ : " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ� : " << waterGuage << endl;
	}


	~HybridWaterCar() {

		cout << "hybrid Water car �Ҹ��� ȣ��" << endl;

	}


};

int main(void) {


	HybridWaterCar car1(100, 10, 45);
	car1.showCurrentGuage();


	return 0;



}


