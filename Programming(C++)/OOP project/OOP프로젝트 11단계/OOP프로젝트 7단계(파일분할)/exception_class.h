#pragma once
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class DepositException // 입금 관련 예외상황의 표현을 위해서 정의된 클래스
{
private:
	int reqDep;

public:
	DepositException(int money) : reqDep(money) {} //생성자 정의

	void ShowExceptionReason() {

		cout << "예외 메세지 : " << reqDep << "는 입금이 불가합니다." << endl;

	}

};

class WithDrawException // 출금관련 예외상황의 표현을 위해서 정의된 클래스
{

private:
	int balance;

public:

	WithDrawException(int money) :balance(money) {}

	void ShowExceptionReason() {

		cout << "예외 메세지 : 현 잔고가 " << balance << "원으로, 잔액이 부족합니다." << endl;

	}
}; 
