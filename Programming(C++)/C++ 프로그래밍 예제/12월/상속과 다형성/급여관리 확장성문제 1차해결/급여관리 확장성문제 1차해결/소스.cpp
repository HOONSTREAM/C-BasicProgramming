#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;
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

	//������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700); //�����Ͱ�ü�� ���� �����Ͽ� �ӽ���Ŭ���� ������ �Լ��� ���� ȣ���Ű������ ���� ��ü�� ����.
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // �������� 7000
	handler.AddEmployee(seller);

	// �̹��޿� �����ؾ��� �޿��� ����
	handler.showAllsalaryInfo();

	//�̹� �޿� �����ؾ��� �޿��� �� ��

	handler.ShowTotalSalary();



	return 0;

}