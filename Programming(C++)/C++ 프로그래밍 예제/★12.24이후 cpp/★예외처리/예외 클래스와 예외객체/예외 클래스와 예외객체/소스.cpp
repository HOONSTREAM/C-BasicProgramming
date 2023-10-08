#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class DepositException // 입금 관련 예외상황의 표현을 위해서 정의된 클래스
{
private :
	int reqDep;

public :
	DepositException(int money) : reqDep(money) {} //생성자 정의
	
	void ShowExceptionReason() {

		cout << "예외 메세지 : " << reqDep << "는 입금불가" << endl;

	}

};

class WithDrawException // 출금관련 예외상황의 표현을 위해서 정의된 클래스
{

private :
	int balance;

public :

	WithDrawException(int money) :balance(money) {}

	void ShowExceptionReason() {

		cout << "예외 메세지 : " << balance << "는 잔액부족" << endl;

	}
};

class Account {

private :
	char accNum[50];
	int balance; 

public :
	Account(const char* acc, int money) :balance(money) {

		strcpy(accNum, acc);

	}

	void Deposit(int money) throw (DepositException) {

		if (money < 0)
		{
			DepositException expn(money);
			throw expn;

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

	catch (DepositException& expn) {

		expn.ShowExceptionReason();

	}
	myAcc.ShowMyMoney();

	try {

		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);

	}

	catch (WithDrawException& expn) {

		expn.ShowExceptionReason();


	}

	myAcc.ShowMyMoney();

	return 0;

}


