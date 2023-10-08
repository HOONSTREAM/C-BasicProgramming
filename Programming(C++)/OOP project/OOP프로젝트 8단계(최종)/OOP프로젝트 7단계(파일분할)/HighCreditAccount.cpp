#include "HighCreditAccount.h"

HighCreditAccount::HighCreditAccount(int MyID, int Mymoney, char* myname, int ratio_1, int ratio_2) : NormalAccount(MyID, Mymoney, myname, ratio_1), specialrate(ratio_2) {}


HighCreditAccount::HighCreditAccount(const HighCreditAccount& copy) : NormalAccount(copy), specialrate(copy.specialrate) {}


void HighCreditAccount::Deposit(int money) {

	cout << "DePosit::HighcreditAccount" << endl;

	NormalAccount::Deposit(money);

	NormalAccount::Deposit(money * specialrate / 100);
}

HighCreditAccount& HighCreditAccount::operator= (const HighCreditAccount& ref) {

	NormalAccount::operator=(ref);
	specialrate = ref.specialrate;

	return *this;

}