#pragma once

#include "AccountData.h"


class NormalAccount : public AccountData {

private:
	int Account_interest;

public:

	NormalAccount(int MyID, int Mymoney, String myname, int ratio); //������

	
	virtual void Deposit(int money); 
};

