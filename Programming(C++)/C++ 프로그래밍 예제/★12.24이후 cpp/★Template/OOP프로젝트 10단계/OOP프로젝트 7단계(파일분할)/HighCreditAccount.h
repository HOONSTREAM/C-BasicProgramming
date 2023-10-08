#pragma once
#include <iostream>
using namespace std;

#include "NormalAccount.h"


class HighCreditAccount : public NormalAccount {

private:

	double specialrate;

public:
	HighCreditAccount(int MyID, int Mymoney, String myname, int ratio_1, int ratio_2);


	virtual void Deposit(int money);
	
};


