#include "HighCreditAccount.h"

HighCreditAccount::HighCreditAccount(int MyID, int Mymoney, String myname, int ratio_1, int ratio_2) : NormalAccount(MyID, Mymoney, myname, ratio_1), specialrate(ratio_2) {}



void HighCreditAccount::Deposit(int money) {

	cout << "DePosit::HighcreditAccount" << endl;

	NormalAccount::Deposit(money);

	NormalAccount::Deposit(money * specialrate / 100);
}

