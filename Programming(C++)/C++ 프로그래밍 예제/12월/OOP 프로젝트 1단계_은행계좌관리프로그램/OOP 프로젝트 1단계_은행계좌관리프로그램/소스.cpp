#include "Header.h"


int main(void) {
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "¼±ÅÃ : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;

		case DEPOSIT:
			DepositMoney();
			break;

		case WITHDRAW:
			WithdrawMoney();
			break;

		case INQUIRE:
			ShowAllAccInfo();
			break;

		case EXIT:
			return 0;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;

}



