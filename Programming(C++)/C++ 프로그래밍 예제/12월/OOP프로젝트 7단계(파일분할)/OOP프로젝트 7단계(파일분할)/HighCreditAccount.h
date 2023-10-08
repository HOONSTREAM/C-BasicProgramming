#pragma once
#include <iostream>
using namespace std;

#include "NormalAccount.h"


class HighCreditAccount : public NormalAccount {

private:

	double specialrate;

public:
	HighCreditAccount(int MyID, int Mymoney, char* myname, int ratio_1, int ratio_2);
	HighCreditAccount(const HighCreditAccount& copy);

	virtual void Deposit(int money);
	
};


