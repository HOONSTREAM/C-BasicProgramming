#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

#include "AccountData.h"

AccountData::AccountData(int ID, int money, char* name) : accID(ID), balance(money) {

	cusname = new char[strlen(name) + 1]; //동적할당
	strcpy(cusname, name);

}

AccountData::AccountData(const AccountData& copy) :accID(copy.accID), balance(copy.balance) { //복사생성자를 정의

	cusname = new char[strlen(copy.cusname) + 1];
	strcpy(cusname, copy.cusname);
}

void AccountData::Deposit(int money) {

	cout << "AccountData::Deposit" << endl;
	balance += money;

}

int AccountData::GetAccID() const { return accID; } // accID를 리턴받는 겟함수 정의


int AccountData::WithDraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;

}

void AccountData::showAccInfo() const
{
	cout << "계좌 ID : " << accID << endl;
	cout << "이름 : " << cusname << endl;
	cout << " 잔액 : " << balance << endl;


}

AccountData::~AccountData()  //소멸자 정의
{
	delete[]cusname;

}
