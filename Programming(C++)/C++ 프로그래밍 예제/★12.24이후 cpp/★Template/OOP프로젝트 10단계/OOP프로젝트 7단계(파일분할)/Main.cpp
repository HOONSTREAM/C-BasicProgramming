#include "BankingCommonDec1.h"
#include "AccountHandler.h"

int main(void) {

	AccountHandler obj1;
	int choice;

	while (1)
	{

		obj1.ShowMenu();
		cout << "¼±ÅÃ : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			obj1.MakeAccount();
			break;

		case DEPOSIT:
			obj1.DepositMoney();
			break;

		case WITHDRAW:
			obj1.WithdrawMoney();
			break;

		case INQUIRE:
			obj1.ShowAllAccInfo();
			break;

		case EXIT:
			obj1.~AccountHandler();
			


			return 0;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;
}
