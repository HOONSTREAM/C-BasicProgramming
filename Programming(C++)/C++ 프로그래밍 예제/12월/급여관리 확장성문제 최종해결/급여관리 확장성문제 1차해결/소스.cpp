#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

namespace RISK_LEVEL {

	enum { RISK_A=3, RISK_B=2, RISK_C=1 };

	
}
/*제일큰 목적 : EmployeeHandler 클래스(컨트롤클래스)를 제작, 모든객체가 기초클래스 Employee를 직접 혹은 간접상속하게 만들어서
새로운 직군이 추가되더라도 컨트롤클래스를 건드릴 일이 없도록 하는 것이 최종목적이다.
그리고 여기서 기초클래스 EmployHandler 클래스는 실제로 가리키는객체가 정규직이건 영업직이건 항상 Employee로 컴파일러가 간주하기 때문에,
즉, employee *ptr1 = new Permanent Worker (); 를 해서 가리키는 객체가 정규직이어도, 실제로 호출할 수 있는 함수는 employee 뿐이어서,
이거를 해결할 수 있는 수단이 가상함수(virtual Function)이다. 실제 가리키는 객체가 마지막으로 오버라이딩한 함수를 호출시킨다. */
class Employee {

private:
	char name[100];

public :
	Employee(const char* name) {

		strcpy(this->name, name);
	}

	void ShowYourname() const {
		cout << "name : " << name << endl;
	}

	virtual int GetPay() const = 0;  //순수 가상함수. 추상클래스 객체생성 방지

	virtual void ShowSalaryInfo() const = 0; // 순수 가상함수 
};

class PermanentWorker : public Employee { // Employee 클래스를 직접 상속한다. 

private :
	int salary;

public :
	PermanentWorker(const char* name, int money) :Employee(name), salary(money) {}

	int GetPay() const { return salary; } //오버라이딩
	 
	void ShowSalaryInfo() const { //오버라이딩 
		ShowYourname();
		cout << "Salary : " << salary << endl;

	}
};

class TemporaryWorker : public Employee {

private :
	int WorkTime; //이달에 일한 시간의 합계
	int payperHour; // 시급

public :
	TemporaryWorker(const char*name, int pay):Employee(name),WorkTime(0),payperHour(pay){}

	void AddWorkTime(int time) { //노동시간 추가 함수

		WorkTime += time;

	}

	int GetPay() const { //급여 출력 함수, 오버라이딩 

		return WorkTime * payperHour;
	}

	void ShowSalaryInfo() const { //오버라이딩

		ShowYourname();
		cout << "salary : " << GetPay() << endl;
	}
};

class ForeignSalesWorker : public PermanentWorker {

private :

	int salesResult; //영업실적
	double bonusRatio;
	int RISK_LEVEL;
public :
	ForeignSalesWorker(const char* name, int money, double ratio,int pos) :PermanentWorker(name, money),bonusRatio(ratio), salesResult(0) ,RISK_LEVEL(pos) {}

	void AddSalesResult(int value) { //함수 오버라이딩

		salesResult += value;

	}

	int GetPay() const {

		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	int RiskPay() const {

		return (PermanentWorker::GetPay() + (int)(salesResult * bonusRatio)) * RISK_LEVEL / 10;
	}

	void ShowSalaryInfo() const {

		ShowYourname();
		cout << "salary : " << GetPay() << endl;
		cout << "risk Pay : " << RiskPay() << endl;
		cout << "sum : " << GetPay() + RiskPay() << endl << endl;

	}


};

class SalesWorker :public PermanentWorker { //employee를 간접상속함.

private :
	int salesResult;
	double bonusRatio;

public :
	SalesWorker(const char *name,int money,double ratio):PermanentWorker(name,money),salesResult(0),bonusRatio(ratio){}

	void AddSalesResult(int value) {

		salesResult += value;
	}

	int GetPay() const { //함수오버라이딩 :: 오버라이딩된 기초클래스의 함수는 유도클래스 함수에 의해 가려진다.

		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const { //함수 오버라이딩 , 오버라이딩안하고 permanentWorker 의 showsalaryInfo함수를 호출하게되면
		// permanentWorker의 getpay 함수가 호출되게 된다.

		ShowYourname();
		cout << "salary : " << GetPay() << endl;
	
	}
};

class EmployHandler {

private :
	Employee* emplist[50];
	int empnum;

public :
	EmployHandler() :empnum(0) {}

	void AddEmployee(Employee* emp) { //외부에서 정의된 객체포인터배열의 주소값을 받겠다.

		emplist[empnum++] = emp;

	}

	void showAllsalaryInfo() const { //실제로 PermanentWorker 객체를 가리키고있지만, Employee 클래스의 포인터로는 Per~클래스의 멤버함수를 호출할 수 없음.

		for (int i = 0; i < empnum; i++) {
			emplist[i]->ShowSalaryInfo();
		} 

	}

	void ShowTotalSalary() const {

		int sum = 0;

		for (int i = 0; i < empnum; i++) {

			sum += emplist[i]->GetPay();

			
		}
		cout << "salary sum : " << sum << endl;
	}

	~EmployHandler() {

		for (int i = 0; i < empnum; i++) {
			delete emplist[i];

		}
	}
};

int main(void) {

	EmployHandler handler;

	/*//정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	//임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700); //포인터객체를 직접 생성하여 임시직클래스 내부의 함수를 직접 호출시키기위해 직접 객체를 만듬.
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // 영업실적 7000
	handler.AddEmployee(seller);*/

	//해외 영업직 
	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);
	handler.AddEmployee(fseller1);

	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);
	handler.AddEmployee(fseller2);

	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);
	handler.AddEmployee(fseller3);



	// 이번달에 지불해야할 급여의 정보
	handler.showAllsalaryInfo();

	//이번 달에 지급해야할 급여의 총 합

	//handler.ShowTotalSalary();



	return 0;

}