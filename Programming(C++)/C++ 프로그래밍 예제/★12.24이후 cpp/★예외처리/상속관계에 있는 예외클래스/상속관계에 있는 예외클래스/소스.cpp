#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable :4996)

class AccountException {

public :
	virtual void ShowExceptionReason() = 0; //순수 가상함수, 이를 포함하는 클래스를 상속받은 클래스에서 반드시 재정의(오버라이딩)하도록 하기 위해 정의

};

class DepositException : public AccountException
{
private:
	int reqDep;

public:
	DepositException(int money) : reqDep(money) {} //생성자 정의

	void ShowExceptionReason() {

		cout << "예외 메세지 : " << reqDep << "는 입금불가" << endl;

	}

};

class WithDrawException : public AccountException
{

private:
	int balance;

public:

	WithDrawException(int money) :balance(money) {}

	void ShowExceptionReason() {

		cout << "예외 메세지 : " << balance << "는 잔액부족" << endl;

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
			throw DepositException(money); //임시객체를 만들어서 참조 시킴
			

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

		cout << "잔고 : " << balance << endl;

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


