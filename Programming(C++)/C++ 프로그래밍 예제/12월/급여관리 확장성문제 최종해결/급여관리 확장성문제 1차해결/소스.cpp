#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

namespace RISK_LEVEL {

	enum { RISK_A=3, RISK_B=2, RISK_C=1 };

	
}
/*����ū ���� : EmployeeHandler Ŭ����(��Ʈ��Ŭ����)�� ����, ��簴ü�� ����Ŭ���� Employee�� ���� Ȥ�� ��������ϰ� ����
���ο� ������ �߰��Ǵ��� ��Ʈ��Ŭ������ �ǵ帱 ���� ������ �ϴ� ���� ���������̴�.
�׸��� ���⼭ ����Ŭ���� EmployHandler Ŭ������ ������ ����Ű�°�ü�� �������̰� �������̰� �׻� Employee�� �����Ϸ��� �����ϱ� ������,
��, employee *ptr1 = new Permanent Worker (); �� �ؼ� ����Ű�� ��ü�� �������̾, ������ ȣ���� �� �ִ� �Լ��� employee ���̾,
�̰Ÿ� �ذ��� �� �ִ� ������ �����Լ�(virtual Function)�̴�. ���� ����Ű�� ��ü�� ���������� �������̵��� �Լ��� ȣ���Ų��. */
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

	virtual int GetPay() const = 0;  //���� �����Լ�. �߻�Ŭ���� ��ü���� ����

	virtual void ShowSalaryInfo() const = 0; // ���� �����Լ� 
};

class PermanentWorker : public Employee { // Employee Ŭ������ ���� ����Ѵ�. 

private :
	int salary;

public :
	PermanentWorker(const char* name, int money) :Employee(name), salary(money) {}

	int GetPay() const { return salary; } //�������̵�
	 
	void ShowSalaryInfo() const { //�������̵� 
		ShowYourname();
		cout << "Salary : " << salary << endl;

	}
};

class TemporaryWorker : public Employee {

private :
	int WorkTime; //�̴޿� ���� �ð��� �հ�
	int payperHour; // �ñ�

public :
	TemporaryWorker(const char*name, int pay):Employee(name),WorkTime(0),payperHour(pay){}

	void AddWorkTime(int time) { //�뵿�ð� �߰� �Լ�

		WorkTime += time;

	}

	int GetPay() const { //�޿� ��� �Լ�, �������̵� 

		return WorkTime * payperHour;
	}

	void ShowSalaryInfo() const { //�������̵�

		ShowYourname();
		cout << "salary : " << GetPay() << endl;
	}
};

class ForeignSalesWorker : public PermanentWorker {

private :

	int salesResult; //��������
	double bonusRatio;
	int RISK_LEVEL;
public :
	ForeignSalesWorker(const char* name, int money, double ratio,int pos) :PermanentWorker(name, money),bonusRatio(ratio), salesResult(0) ,RISK_LEVEL(pos) {}

	void AddSalesResult(int value) { //�Լ� �������̵�

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

class SalesWorker :public PermanentWorker { //employee�� ���������.

private :
	int salesResult;
	double bonusRatio;

public :
	SalesWorker(const char *name,int money,double ratio):PermanentWorker(name,money),salesResult(0),bonusRatio(ratio){}

	void AddSalesResult(int value) {

		salesResult += value;
	}

	int GetPay() const { //�Լ��������̵� :: �������̵��� ����Ŭ������ �Լ��� ����Ŭ���� �Լ��� ���� ��������.

		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const { //�Լ� �������̵� , �������̵����ϰ� permanentWorker �� showsalaryInfo�Լ��� ȣ���ϰԵǸ�
		// permanentWorker�� getpay �Լ��� ȣ��ǰ� �ȴ�.

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

	void AddEmployee(Employee* emp) { //�ܺο��� ���ǵ� ��ü�����͹迭�� �ּҰ��� �ްڴ�.

		emplist[empnum++] = emp;

	}

	void showAllsalaryInfo() const { //������ PermanentWorker ��ü�� ����Ű��������, Employee Ŭ������ �����ͷδ� Per~Ŭ������ ����Լ��� ȣ���� �� ����.

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

	/*//������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700); //�����Ͱ�ü�� ���� �����Ͽ� �ӽ���Ŭ���� ������ �Լ��� ���� ȣ���Ű������ ���� ��ü�� ����.
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // �������� 7000
	handler.AddEmployee(seller);*/

	//�ؿ� ������ 
	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);
	handler.AddEmployee(fseller1);

	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);
	handler.AddEmployee(fseller2);

	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);
	handler.AddEmployee(fseller3);



	// �̹��޿� �����ؾ��� �޿��� ����
	handler.showAllsalaryInfo();

	//�̹� �޿� �����ؾ��� �޿��� �� ��

	//handler.ShowTotalSalary();



	return 0;

}