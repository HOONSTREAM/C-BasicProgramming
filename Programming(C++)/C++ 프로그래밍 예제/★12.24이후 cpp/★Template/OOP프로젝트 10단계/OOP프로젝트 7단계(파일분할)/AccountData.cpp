#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

#include "AccountData.h"

AccountData::AccountData(int ID, int money, String name) : accID(ID), balance(money) {

	cusname = name;
}


void AccountData::Deposit(int money) {

	cout << "AccountData::Deposit" << endl;
	balance += money;

}

int AccountData::GetAccID() const { return accID; } // accID�� ���Ϲ޴� ���Լ� ����


int AccountData::WithDraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;

}

void AccountData::showAccInfo() const
{
	cout << "���� ID : " << accID << endl;
	cout << "�̸� : " << cusname << endl;
	cout << " �ܾ� : " << balance << endl;


}

