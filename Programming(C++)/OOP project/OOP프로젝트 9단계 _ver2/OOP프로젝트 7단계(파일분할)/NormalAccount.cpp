#include <iostream>
using namespace std;

#include "NormalAccount.h"



NormalAccount::NormalAccount(int MyID, int Mymoney, String myname, int ratio) :AccountData(MyID, Mymoney, myname), Account_interest(ratio) {}


void NormalAccount::Deposit(int money) {

	cout << "virtual void Deposit ::normalAccount " << endl;

	AccountData::Deposit(money);

	AccountData::Deposit(money * Account_interest / 100);

}