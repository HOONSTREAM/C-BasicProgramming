#pragma once
#include "String.h"

class AccountData {

private:
	int accID; // ���� ID
	int balance; // ���� �ܾ�
	String cusname;

public:
	AccountData(int ID, int money, String name);
	int GetAccID() const; // AccID(����ID)�� ��� ���Լ�
	int WithDraw(int money); //����Լ�
	void showAccInfo() const; //��������
	virtual void Deposit(int money); // �Ա� �����Լ�
};