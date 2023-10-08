#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class PermanentWorker { //������ Ŭ����

private :
	char name[100];
	int salary;

public :
	PermanentWorker(const char* name, int money) : salary(money) {

		strcpy(this->name, name);

		cout << "��ȣ!" << endl;

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

class EmployeeHandler { //��Ʈ�� Ŭ����

private : 
	PermanentWorker* emplist[50]; //��ü �����͹迭�� �ƴ� ��ü�迭�� �ٲ���
	int empnum;

public :
	EmployeeHandler() : empnum(0) {

		cout << "���" << endl;
	}

	void AddEmployee() { 

		char name[10];
		int money;
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> name;
		cout << "�޿��� �Է��Ͻÿ� : ";
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

			cout << "�Ҹ��� ȣ��" << endl;


		}
	}
};

int main(void) {

	//���������� �������� ����� ��Ʈ��Ŭ������ ��ü����
	EmployeeHandler handler;


	//���� ���
	handler.AddEmployee();
	handler.AddEmployee();// &Lee ���� Lee�� �ٲ���

	//�̹� �޿� �����ؾ��� �޿��� ����

	handler.ShowAllSalaryInfo();

	// �̹��޿� �����ؾ� �� �޿��� ����

	handler.ShowTotalSalary();

	return 0;





}