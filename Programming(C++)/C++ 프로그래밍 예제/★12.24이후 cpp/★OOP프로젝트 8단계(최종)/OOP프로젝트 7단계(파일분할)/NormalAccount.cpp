#include <iostream>
using namespace std;

#include "NormalAccount.h"



NormalAccount::NormalAccount(int MyID, int Mymoney, char* myname, int ratio) :AccountData(MyID, Mymoney, myname), Account_interest(ratio) {}
NormalAccount::NormalAccount(const NormalAccount& copy) : AccountData(copy), Account_interest(copy.Account_interest) {}

void NormalAccount::Deposit(int money) {

	cout << "virtual void Deposit ::normalAccount " << endl;

	AccountData::Deposit(money);

	AccountData::Deposit(money * Account_interest / 100);

}

NormalAccount& NormalAccount::operator=(const NormalAccount& ref) {

	AccountData::operator=(ref);
	Account_interest = ref.Account_interest;

	return *this;

}