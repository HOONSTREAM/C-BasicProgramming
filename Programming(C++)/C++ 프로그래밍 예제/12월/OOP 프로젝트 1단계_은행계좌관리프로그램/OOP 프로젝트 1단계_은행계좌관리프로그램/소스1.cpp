#include "계좌관리 프로그램 헤더.h"
//메인구동함수에는 구조체의 정의가 필요없다.
//헤더파일을 정의할때, cpp파일에서 필요로하는 헤더파일이 무엇인지 생각 후 정의한다.


int main(void) {
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "선택 : ";
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

