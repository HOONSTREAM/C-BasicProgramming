#pragma once

#include "AccountData.h"


class NormalAccount : public AccountData {

private:
	int Account_interest;

public:

	NormalAccount(int MyID, int Mymoney, char* myname, int ratio); //������

	NormalAccount(const NormalAccount& copy); //�ڽ�Ŭ���� ���������

	virtual void Deposit(int money); 
};

