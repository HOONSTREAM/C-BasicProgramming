#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class PermanentWorker { //데이터 클래스

private :
	char name[100];
	int salary;

public :
	PermanentWorker(const char* name, int money) : salary(money) {

		strcpy(this->name, name);

		cout << "요호!" << endl;

	}

	int GetPay() const
	{
		return salary;

	}

	void ShowSalaryInfo() const {

		cout << "name : " << name << endl;
		cout << "salary : " << salary << endl;

	}
};

class EmployeeHandler { //컨트롤 클래스

private : 
	PermanentWorker* emplist[50]; //객체 포인터배열이 아닌 객체배열로 바꿨음
	int empnum;

public :
	EmployeeHandler() : empnum(0) {

		cout << "깔깔" << endl;
	}

	void AddEmployee() { 

		char name[10];
		int money;
		cout << "이름을 입력하시오 : ";
		cin >> name;
		cout << "급여를 입력하시오 : ";
		cin >> money;

		emplist[empnum++] = new PermanentWorker(name, money);

		

	}

	void ShowAllSalaryInfo() const {

		for (int i = 0; i < empnum; i++) {

			emplist[i]->ShowSalaryInfo();

		}
	}

	void ShowTotalSalary() const {

		int sum = 0;
		for (int i = 0; i < empnum; i++) {
			
			sum += emplist[i]->GetPay();

			

		}

		cout << "Total Salary : " << sum << endl;
	}

	~EmployeeHandler() {
		
		for (int i = 0; i < empnum; i++) {

			delete emplist[i];

			cout << "소멸자 호출" << endl;


		}
	}
};

int main(void) {

	//직원관리를 목적으로 설계된 컨트롤클래스의 객체생성
	EmployeeHandler handler;


	//직원 등록
	handler.AddEmployee();
	handler.AddEmployee();// &Lee 에서 Lee로 바꿨음

	//이번 달에 지불해야할 급여의 정보

	handler.ShowAllSalaryInfo();

	// 이번달에 지불해야 할 급여의 총합

	handler.ShowTotalSalary();

	return 0;





}