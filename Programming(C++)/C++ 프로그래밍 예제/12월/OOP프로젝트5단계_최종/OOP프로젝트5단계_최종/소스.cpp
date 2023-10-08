#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
#define NAME_LEN 20
using namespace std;

enum Menu_Type {

	MAKE = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT

};
// 데이터 클래스를 정의한다.
class AccountData {

private:
	int accID; // 계좌 ID
	int balance; // 계좌 잔액
	char* cusname; //예금주 이름

public:
	AccountData(int ID, int money, char* name); // 생성자
	AccountData(const AccountData& copy); //복사생성자
	 
	int GetAccID() const; // AccID(계좌ID)를 얻는 겟함수
 	void Deposit(int money); //입금함수
	int WithDraw(int money); //출금함수
	void showAccInfo() const; //계좌정보
	~AccountData(); //소멸자
};

	AccountData::AccountData(int ID, int money, char* name) : accID(ID), balance(money) {  //생성자 

		cusname = new char[strlen(name) + 1]; //동적할당
		strcpy(cusname, name);
		
	}

	AccountData::AccountData(const AccountData& copy) :accID(copy.accID), balance(copy.balance) { //복사생성자를 정의

		cusname = new char[strlen(copy.cusname) + 1];
		strcpy(cusname, copy.cusname);
	}

	int AccountData::GetAccID() const { return accID; } // accID를 리턴받는 겟함수 정의


	void AccountData::Deposit(int money) {

		this->balance += money; 

	}

	int AccountData:: WithDraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;

	}

	void AccountData:: showAccInfo() const
	{
		cout << "계좌 ID : " << accID << endl;
		cout << "이름 : " << cusname << endl;
		cout << " 잔액 : " << balance << endl;


	}

	AccountData::~AccountData()  //소멸자 정의
	{
		delete[]cusname;

	}

//컨트롤 클래스의 정의
	class AccountHandler {

	private:
		AccountData* cuslist[100]; //객체포인터배열로 고객의정보를 주소값으로 저장
		int cusnum; //고객 수

	public:
		AccountHandler(); //생성자
		void MakeAccount(); //계좌개설함수
		void ShowMenu(); //메뉴출력
		void DepositMoney(); //입금컨트롤
		void WithdrawMoney(); //출금컨트롤
		void ShowAllAccInfo(); // 생성된 계좌의 모든정보 출력
		~AccountHandler();

	};

	AccountHandler::AccountHandler() : cusnum(0) {}

	void AccountHandler:: MakeAccount() {


		int id;
		char name[NAME_LEN];
		int balance;

		cout << " [계좌 개설] " << endl;
		cout << " 계좌 ID : "; cin >> id;
		cout << " 이름 : "; cin >> name;
		cout << "입금 액 : "; cin >> balance;
		cout << endl;

		cuslist[cusnum++] = new AccountData(id, balance, name); // 클래스 객체 포인터 배열 할당

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

				cuslist[k]->Deposit(money);
				cout << "입금완료" << endl;
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
				if (cuslist[i]->WithDraw(money) == 0) { //함수를 실행했을 때 0이 반환되면 
					cout << "잔액 부족" << endl << endl;
					return;
				}

				cout << "출금 완료" << endl << endl;
				return;

			}


		}

		cout << "유효하지 않은 ID 입니다. " << endl << endl;


	}

	void AccountHandler:: ShowAllAccInfo() {

		for (int i = 0; i < cusnum; i++) {

			cuslist[i]->showAccInfo(); //(*accArr[i].showAccInfo() 와 동일) , 즉 accArr[i]는 주소다. 
			cout << endl;

		}

	}

	AccountHandler::~AccountHandler() {

		for (int i = 0; i < cusnum; i++) {
			delete cuslist[i];
		}
	}



int main(void) {

	AccountHandler obj1;
	int choice;

	while (1)
	{
		
		obj1.ShowMenu();
		cout << "선택 : ";
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

