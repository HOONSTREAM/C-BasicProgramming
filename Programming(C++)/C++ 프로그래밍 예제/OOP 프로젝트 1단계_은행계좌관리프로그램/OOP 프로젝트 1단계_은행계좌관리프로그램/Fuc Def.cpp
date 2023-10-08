#include "Header.h"
void ShowMenu(void) {

	cout << "-------------MENU-------------" << endl;
	cout << " 1. 계좌개설 " << endl;
	cout << " 2. 입금" << endl;
	cout << " 3. 출금" << endl;
	cout << " 4. 계좌정보 전체 출력" << endl;
	cout << " 5. 프로그램 종료 " << endl;

}

void MakeAccount(void) {

	int id;
	char name[NAME_LEN];
	int balance;

	cout << " [계좌 개설] " << endl;
	cout << " 계좌 ID : "; cin >> id;
	cout << " 이름 : "; cin >> name;
	cout << "입금 액 : "; cin >> balance;
	cout << endl;

	accArr[accnum].accID = id;
	accArr[accnum].balance = balance;
	strcpy_s(accArr[accnum].cusName, name);  // 문자열 복사함수, name에 저장된 문자열을 accArr[accnum].cusName 에 복사한다.
	
	accnum++;

}

void DepositMoney(void) {

	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "입금 액 :  "; cin >> money;

	for (int i = 0; i < accnum; i++) {

		if (accArr[i].accID == id) {
			accArr[i].balance = money;
			cout << "입금 완료" << endl << endl;

			return;

		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;

}

void WithdrawMoney(void) {

	int money;
	int id;

	cout << "[출 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "출금 액 :  "; cin >> money;
	
	for (int i = 0; i < accnum; i++) {

		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
				cout << "잔액 부족" << endl << endl;
			return;

		}

		accArr[i].balance -= money;
		cout << "출금 완료" << endl << endl;
		return;


	}

	cout << "유효하지 않은 ID 입니다. " << endl << endl;


}

void ShowAllAccInfo(void) {

	for (int i = 0; i < accnum; i++) {

		cout << "계좌 ID : " << accArr[i].accID << endl;
		cout << "이름 : " << accArr[i].cusName << endl;
		cout << "잔액 : " << accArr[i].balance << endl;

	}
}