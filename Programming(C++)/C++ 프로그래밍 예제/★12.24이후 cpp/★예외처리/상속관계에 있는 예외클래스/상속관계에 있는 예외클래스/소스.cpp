#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable :4996)

class AccountException {

public :
	virtual void ShowExceptionReason() = 0; //���� �����Լ�, �̸� �����ϴ� Ŭ������ ��ӹ��� Ŭ�������� �ݵ�� ������(�������̵�)�ϵ��� �ϱ� ���� ����

};

class DepositException : public AccountException
{
private:
	int reqDep;

public:
	DepositException(int money) : reqDep(money) {} //������ ����

	void ShowExceptionReason() {

		cout << "���� �޼��� : " << reqDep << "�� �ԱݺҰ�" << endl;

	}

};

class WithDrawException : public AccountException
{

private:
	int balance;

public:

	WithDrawException(int money) :balance(money) {}

	void ShowExceptionReason() {

		cout << "���� �޼��� : " << balance << "�� �ܾ׺���" << endl;

	}
};

class Account {

private:
	char accNum[50];
	int balance;

public:
	Account(const char* acc, int money) :balance(money) {

		strcpy(accNum, acc);

	}

	void Deposit(int money) throw (DepositException) {

		if (money < 0)
		{
			throw DepositException(money); //�ӽð�ü�� ���� ���� ��Ŵ
			

		}
		balance += money;
	}
	void Withdraw(int money) throw(WithDrawException) {
		if (money > balance) {
			throw WithDrawException(balance);
		}
		balance -= money;

	}

	void ShowMyMoney() {

		cout << "�ܰ� : " << balance << endl;

	}
};

int main(void) {

	Account myAcc("56778-1234", 5000);

	try {

		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}

	catch (AccountException& expn) {

		expn.ShowExceptionReason();

	}
	myAcc.ShowMyMoney();

	try {

		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);

	}

	catch (AccountException& expn) {

		expn.ShowExceptionReason();


	}

	myAcc.ShowMyMoney();

	return 0;

}


