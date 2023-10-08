#pragma once

#include "AccountData.h"


class NormalAccount : public AccountData {

private:
	int Account_interest;

public:

	NormalAccount(int MyID, int Mymoney, char* myname, int ratio); //생성자

	NormalAccount(const NormalAccount& copy); //자식클래스 복사생성자

	virtual void Deposit(int money); 
};

