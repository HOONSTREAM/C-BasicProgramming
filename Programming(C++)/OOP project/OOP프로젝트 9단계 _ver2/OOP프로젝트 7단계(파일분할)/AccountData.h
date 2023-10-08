#pragma once
#include "String.h"

class AccountData {

private:
	int accID; // 계좌 ID
	int balance; // 계좌 잔액
	String cusname;

public:
	AccountData(int ID, int money, String name);
	int GetAccID() const; // AccID(계좌ID)를 얻는 겟함수
	int WithDraw(int money); //출금함수
	void showAccInfo() const; //계좌정보
	virtual void Deposit(int money); // 입금 가상함수
};