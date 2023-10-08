#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

#include "AccountData.h"

AccountData::AccountData(int ID, int money, char* name) : accID(ID), balance(money) {

	cusname = new char[strlen(name) + 1]; //�����Ҵ�
	strcpy(cusname, name);

}

AccountData::AccountData(const AccountData& copy) :accID(copy.accID), balance(copy.balance) { //��������ڸ� ����

	cusname = new char[strlen(copy.cusname) + 1];
	strcpy(cusname, copy.cusname);
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

AccountData::~AccountData()  //�Ҹ��� ����
{
	delete[]cusname;

}
