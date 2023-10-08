#include "AccountHandler.h"
#include "BankingCommonDec1.h"
#include "HighCreditAccount.h"
#include "NormalAccount.h"
#include "String.h"
#include "exception_class.h"


AccountHandler::AccountHandler() : cusnum(0) {}

void AccountHandler::MakeAccount() {

	int sel;
	cout << "[계좌 종류 선택]" << endl;
	cout << "1.보통 예금 계좌" << endl;
	cout << "2. 신용 신뢰 계좌" << endl;
	cout << "선택 : ";
	cin >> sel;

	if (sel == NORMAL)
		MakeNormalAccount();
	else if (sel == CREDIT)
	{
		MakeCreditAccount();
	}
	else
		cout << "잘못된 접근입니다. 프로그램을 종료합니다.";
		exit(1);



}

void AccountHandler::MakeNormalAccount() {

	int id;
	String name;
	int balance;
	int ratio;

		cout << " [계좌 개설] " << endl;
		cout << " 계좌 ID : "; cin >> id;
		cout << " 이름 : "; cin >> name;
		cout << "입금 액 : "; cin >> balance;
		cout << "이자율(%) : "; cin >> ratio;
		cout << endl;
		
		if (balance < 0) {

			cout << "입금액이 마이너스가 될 수 없습니다. 프로그램을 종료합니다.";

			exit(1);
		}
	
			cuslist[cusnum++] = new NormalAccount(id, balance, name, ratio);
		
		

}

void AccountHandler::MakeCreditAccount() {

	int id;
	String name;
	int balance;
	int ratio;
	int creditlevel;


	cout << " [계좌 개설] " << endl;
	cout << " 계좌 ID : "; cin >> id;
	cout << " 이름 : "; cin >> name;
	cout << "입금 액 : "; cin >> balance;
	cout << "이자율(%) : "; cin >> ratio;
	cout << "신용 등급 (1 = A , 2 = B , 3 = C ) : ";
	cin >> creditlevel;

	if (balance < 0) {

		cout << "입금액이 마이너스가 될 수 없습니다. 프로그램을 종료합니다.";

		exit(1);
	}

	switch (creditlevel) {

	case 1:
		cuslist[cusnum++] = new HighCreditAccount(id, balance, name, ratio, LEVEL_A);

		break;

	case 2:
		cuslist[cusnum++] = new HighCreditAccount(id, balance, name, ratio, LEVEL_B);

		break;
	case 3:
		cuslist[cusnum++] = new HighCreditAccount(id, balance, name, ratio, LEVEL_C);

		break;
	}

	cout << endl;

}


void AccountHandler::ShowMenu() {

	cout << "-------------MENU-------------" << endl;
	cout << " 1. 계좌개설 " << endl;
	cout << " 2. 입금" << endl;
	cout << " 3. 출금" << endl;
	cout << " 4. 계좌정보 전체 출력" << endl;
	cout << " 5. 프로그램 종료 " << endl;

}


void AccountHandler::DepositMoney() {

	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "입금 액 :  "; cin >> money;

	for (int k = 0; k < cusnum; k++) {

		if (cuslist[k]->GetAccID() == id) {  //a -> b 는 (*a).b와 동일합니다. , accArr가 객체 포인터 배열로 선언되었기 때문에 .. 

			try {
				cuslist[k]->Deposit(money);
				cout << "입금완료" << endl;
			}
			catch (DepositException& expn) {

				expn.ShowExceptionReason();

			}
			
			return;

		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;

}

void AccountHandler::WithdrawMoney() {

	int money;
	int id;

	cout << "[출 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "출금 액 :  "; cin >> money;

	for (int i = 0; i < cusnum; i++) {

		if (cuslist[i]->GetAccID() == id)
		{
			try{
				cuslist[i]->WithDraw(money);
				cout << "출금 완료" << endl << endl;
			}
			catch (WithDrawException& expn) {

				expn.ShowExceptionReason();
			}

			
			return;

		}


	}

	cout << "유효하지 않은 ID 입니다. " << endl << endl;


}

void AccountHandler::ShowAllAccInfo() {

	for (int i = 0; i < cusnum; i++) {

		cuslist[i]->showAccInfo(); //(*accArr[i].showAccInfo() 와 동일) , 즉 accArr[i]는 주소다. 
		cout << endl;

	}

}

AccountHandler::~AccountHandler() {

	
	for (int i = 0; i < cusnum; i++) {
		cout << "AccountHandler 소멸자" << i << "번 호출됨" << endl;
		delete cuslist[i];
	}
	
	}
	


