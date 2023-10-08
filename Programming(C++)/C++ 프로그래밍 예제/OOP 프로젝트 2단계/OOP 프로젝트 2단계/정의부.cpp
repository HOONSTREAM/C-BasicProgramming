#include <iostream> //클래스 내부 함수 따로, 바깥 메인함수 정의 함수 따로 만들어서 구현했음. 
#include <cstring>
using namespace std;
const int NAME_LEN = 20;
#pragma warning (disable:4996)

void ShowMenu(void);     //메뉴 출력
void MakeAccount(void); // 계좌개설을 위한 함수
void DepositMoney(void); // 입금
void WithdrawMoney(void); // 출금
void ShowAllAccInfo(void); // 잔액 조회

enum Menu_Type {

	MAKE = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT

};

class Account {

private :
	
	int accID;
	int balance;
	char* cusname;

public:
	Account(int ID, int money, char* name) :accID(ID),balance(money) { //생성자함수

		cusname = new char[strlen(name) + 1]; //동적할당
		strcpy(cusname, name);
		cout << "생성자 호출" << endl;


	}

	Account(Account& copy) :accID(copy.accID), balance(copy.balance) {

		cusname = new char[strlen(copy.cusname) + 1];
		strcpy(cusname, copy.cusname);
	}

	int GetAccID() { return accID; }

	void Deposit(int money) {

		this->balance += money;

	}

	int WithDraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;

	}

	void showAccInfo()
	{
		cout << "계좌 ID : " << accID << endl;
		cout << "이름 : " << cusname << endl;
		cout << " 잔액 : " << balance << endl;


	}

	~Account() 
	{
		delete[]cusname;

	}

};

Account* accArr[100];
int accnum = 0;


int main(void)
{

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
			for (int i = 0; i < accnum; i++) {
				delete accArr[i];
			}
			return 0;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;
}


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

	accArr[accnum++] = new Account(id, balance,name); // 클래스 객체 포인터 배열 할당

}

void DepositMoney(void) {

	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "입금 액 :  "; cin >> money;

	for (int i = 0; i < accnum; i++) {

		if (accArr[i]->GetAccID() == id) {  //a -> b 는 (*a).b와 동일합니다. , accArr가 객체 포인터 배열로 선언되었기 때문에 .. 
		
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl;
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

		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->WithDraw(money)== 0) { //함수를 실행했을 때 0이 반환되면 
				cout << "잔액 부족" << endl << endl;
				return;
			}
			
			cout << "출금 완료" << endl << endl;
			return;

		}


	}

	cout << "유효하지 않은 ID 입니다. " << endl << endl;


}

void ShowAllAccInfo(void) {

	for (int i = 0; i < accnum; i++) {

		accArr[i]->showAccInfo();
		cout << endl;

	}
}