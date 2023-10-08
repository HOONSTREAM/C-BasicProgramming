#include <iostream>
#include <cstring>
#include "exception_class.h"
#pragma warning (disable : 4996)
using namespace std;

#include "AccountData.h"

AccountData::AccountData(int ID, int money, String name) : accID(ID), balance(money) {

	cusname = name;
}


void AccountData::Deposit(int money) throw (DepositException) {

	if (money < 0) {

		DepositException expn(money);
		throw expn;

	}
	cout << "AccountData::Deposit" << endl;
	balance += money;

}

int AccountData::GetAccID() const { return accID; } // accID¸¦ ¸®ÅÏ¹Þ´Â °ÙÇÔ¼ö Á¤ÀÇ


int AccountData::WithDraw(int money) throw(WithDrawException)
{
	if (balance < money) {

		throw WithDrawException(balance);
		return 0;
	}
		
	balance -= money;
	return money;

}

void AccountData::showAccInfo() const
{
	cout << "°èÁÂ ID : " << accID << endl;
	cout << "ÀÌ¸§ : " << cusname << endl;
	cout << " ÀÜ¾× : " << balance << endl;


}

