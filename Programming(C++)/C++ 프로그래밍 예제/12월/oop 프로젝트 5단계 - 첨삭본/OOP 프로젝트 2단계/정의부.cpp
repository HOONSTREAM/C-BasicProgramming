//OOP 프로젝트 4단계 ver 0.4 update const 함수 도입 클래스 내부 멤버함수에서 const를 뒤에 붙인다. (const로 정의된 함수 내의 멤버변수 값을 수정하지 않겠다.)
//ver 0.4 에서 const 선언을 함으로서 멤버변수의 값 변경을 방지하여 멤버변수값 임의변경에 대한 안정성을 높인다.


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
	Account(int ID, int money, char* name) :accID(ID),balance(money) { //생성자함수, 멤버 이니셜라이저 사용으로 속도에 이점을 높임

		cusname = new char[strlen(name) + 1]; //동적할당
		strcpy(cusname, name);
		cout << "생성자 호출" << endl;


	}

	Account(const Account& copy) :accID(copy.accID), balance(copy.balance) { //복사생성자를 정의해서 문자열에 대해서는 깊은복사를 시킨다. (얕은복사는 같은주소를 참조하게 됨)

		cusname = new char[strlen(copy.cusname) + 1];
		strcpy(cusname, copy.cusname);
	}

	int GetAccID() const { return accID; }

	void Deposit(int money) {

		this->balance += money; //this -> 객체의 주소와 자료형(타입)이 저장됨.

	}

	int WithDraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;

	}

	void showAccInfo() const 
	{
		cout << "계좌 ID : " << accID << endl;
		cout << "이름 : " << cusname << endl;
		cout << " 잔액 : " << balance << endl;


	}

	~Account()  //소멸자 정의
	{
		delete[]cusname;

	}

};

Account* accArr[100]; //객체 포인터 배열, 전역선언
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

		accArr[i]->showAccInfo(); //(*accArr[i].showAccInfo() 와 동일) , 즉 accArr[i]는 주소다. 
		cout << endl;

	}
}