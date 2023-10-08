#include <iostream>
using namespace std;

class Car {

private : 
	int gasolineGauge;

public :

	Car(int n) : gasolineGauge(n) {

		cout << "Car(int n) : gaseolineGauge 호출 " << endl;

	}
	
	~Car() {

		cout << "car 소멸자 호출" << endl;

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

		cout << "HybridCar (int n1,int n2) : Car(n1), electricGauge(n2) 호출" << endl;

	}
	int GetElecGauge() {

		return electricGauge;

	}

	~HybridCar() {

		cout << "hybrid car 소멸자 호출" << endl;

	}

};


class HybridWaterCar : public HybridCar {

private : 
	int waterGuage;

public : 

	HybridWaterCar(int n, int n1, int n2) : HybridCar(n, n1), waterGuage(n2) {

		cout << "HybridWaterCar(int n, int n1, int n2) : HybridCar(n,n1), waterGuage(n2) 호출" << endl;

	}

	void showCurrentGuage()  {

		cout << "잔여 가솔린 : " << GetGasGauge() << endl;
		cout << "잔여 전기량 : " << GetElecGauge() << endl;
		cout << "잔여 워터량 : " << waterGuage << endl;
	}


	~HybridWaterCar() {

		cout << "hybrid Water car 소멸자 호출" << endl;

	}


};

int main(void) {


	HybridWaterCar car1(100, 10, 45);
	car1.showCurrentGuage();


	return 0;



}


