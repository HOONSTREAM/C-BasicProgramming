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
// 계좌 선택
 enum {NORMAL=1,CREDIT=2};
//신용 등급
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };

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
	int WithDraw(int money); //출금함수
	void showAccInfo() const; //계좌정보
	~AccountData(); //소멸자
	virtual void Deposit(int money); // 입금 가상함수
};

AccountData::AccountData(int ID, int money, char* name) : accID(ID), balance(money) {

	cusname = new char[strlen(name) + 1]; //동적할당
	strcpy(cusname, name);

}

AccountData::AccountData(const AccountData& copy) :accID(copy.accID), balance(copy.balance) { //복사생성자를 정의

	cusname = new char[strlen(copy.cusname) + 1];
	strcpy(cusname, copy.cusname);
}

void AccountData::Deposit(int money) {

	cout << "AccountData::Deposit" << endl;
	balance += money;

}

int AccountData::GetAccID() const { return accID; } // accID를 리턴받는 겟함수 정의


 

int AccountData::WithDraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;

}

void AccountData::showAccInfo() const
{
	cout << "계좌 ID : " << accID << endl;
	cout << "이름 : " << cusname << endl;
	cout << " 잔액 : " << balance << endl;


}

AccountData::~AccountData()  //소멸자 정의
{
	delete[]cusname;

}

class NormalAccount : public AccountData {

private : 
	int Account_interest;

public :

	NormalAccount(int MyID, int Mymoney, char* myname, int ratio); //생성자

	NormalAccount(const NormalAccount& copy); //자식클래스 복사생성자

	virtual void Deposit(int money){

		cout << "virtual void Deposit ::normalAccount " << endl;

		AccountData::Deposit(money); 

		AccountData::Deposit(money * Account_interest/100);

	}

};

NormalAccount ::NormalAccount(int MyID, int Mymoney, char* myname, int ratio) :AccountData(MyID, Mymoney, myname), Account_interest(ratio) {}
NormalAccount ::NormalAccount(const NormalAccount& copy) : AccountData(copy), Account_interest(copy.Account_interest) {}


class HighCreditAccount : public NormalAccount {

private :

	double specialrate;

public :
	HighCreditAccount(int MyID, int Mymoney, char* myname, double ratio_1, double ratio_2) : NormalAccount(MyID, Mymoney, myname, ratio_1), specialrate(ratio_2) {}
	HighCreditAccount(const HighCreditAccount& copy) : NormalAccount(copy), specialrate(copy.specialrate) {}

	virtual void Deposit(int money) {

		cout << "DePosit::HighcreditAccount" << endl;

		NormalAccount::Deposit(money);

		NormalAccount::Deposit(money * specialrate/100);
     
	}
};



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
	 void AddAccount(AccountData *emp);


protected :
	void MakeNormalAccount();
	void MakeCreditAccount();

};

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
	else
	{
		MakeCreditAccount();
	}


	
}

void AccountHandler::MakeNormalAccount() {

	int id;
	char name[NAME_LEN];
	int balance;
	int ratio;

	cout << " [계좌 개설] " << endl;
	cout << " 계좌 ID : "; cin >> id;
	cout << " 이름 : "; cin >> name;
	cout << "입금 액 : "; cin >> balance;
	cout << "이자율(%) : "; cin >> ratio;
	cout << endl;


	cuslist[cusnum++] = new NormalAccount(id, balance, name, ratio);
	

}

void AccountHandler::MakeCreditAccount() {

	int id;
	char name[NAME_LEN];
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

	switch (creditlevel) {

	case 1 :
		cuslist[cusnum++] = new HighCreditAccount (id, balance,name, ratio, LEVEL_A);
		
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

void AccountHandler::AddAccount(AccountData *emp) {

	cuslist[cusnum++] = emp;
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

void AccountHandler::ShowAllAccInfo() {

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
