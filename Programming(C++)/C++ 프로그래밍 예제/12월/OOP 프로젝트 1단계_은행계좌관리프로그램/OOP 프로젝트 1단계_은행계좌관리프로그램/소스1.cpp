#include "���°��� ���α׷� ���.h"
//���α����Լ����� ����ü�� ���ǰ� �ʿ����.
//��������� �����Ҷ�, cpp���Ͽ��� �ʿ���ϴ� ��������� �������� ���� �� �����Ѵ�.


int main(void) {
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "���� : ";
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

