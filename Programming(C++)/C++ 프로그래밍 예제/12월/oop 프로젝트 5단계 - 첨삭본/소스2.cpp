#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

enum MenuType {
	kMake = 1,
	kDeposit,
	kWithdraw,
	kInquire,
	kExit
};

// 데이터 클래스를 정의한다.
class AccountData {
public:
	AccountData(size_t id, size_t money, char* name); // 생성자
	AccountData(const AccountData& copy); //복사생성자
	~AccountData(); //소멸자
	 
	size_t GetAccID() const; // AccID(계좌ID)를 얻는 겟함수
 	void Deposit(size_t money); //입금함수
	size_t WithDraw(size_t money); //출금함수
	void showAccInfo() const; //계좌정보
	
private:
	size_t mAccountId; // 계좌 ID
	size_t mBalance; // 계좌 잔액
	char* mCustomerName; //예금주 이름

	char* NewCustomerName(char* name);
};

AccountData::AccountData(size_t id, size_t money, char* name) : mAccountId(id), mBalance(money), mCustomerName(NewCustomerName(name)) { }

AccountData::AccountData(const AccountData& copy) : AccountData(copy.mAccountId, copy.mBalance, copy.mCustomerName) { }

char* AccountData::NewCustomerName(char* name) {
	char* result = new char[strlen(name) + 1];
	strcpy(result, name);

	return result;
}

size_t AccountData::GetAccID() const { return mAccountId; } // accID를 리턴받는 겟함수 정의


void AccountData::Deposit(size_t money) {
	this->mBalance += money; 
}

size_t AccountData:: WithDraw(size_t money) {
	if (mBalance < money)
		return 0;

	mBalance -= money;
	return money;
}

void AccountData:: showAccInfo() const {
	cout << "계좌 ID : " << mAccountId << endl;
	cout << "이름 : " << mCustomerName << endl;
	cout << " 잔액 : " << mBalance << endl;
}

AccountData::~AccountData() { //소멸자 정의
	delete[] mCustomerName;
}

//컨트롤 클래스의 정의
class AccountHandler {
public:
	AccountHandler() = default; //생성자
	void MakeAccount(); //계좌개설함수
	void ShowMenu(); //메뉴출력
	void DepositMoney(); //입금컨트롤
	void WithdrawMoney(); //출금컨트롤
	void ShowAllAccInfo(); // 생성된 계좌의 모든정보 출력
	~AccountHandler();

private:
	static constexpr size_t kMaxCustomer = 100;
	static constexpr size_t kMaxNameLength = 20;

	AccountData* mCustomerList[100] = {0}; //객체포인터배열로 고객의정보를 주소값으로 저장
	size_t mSize = 0; //고객 수

	AccountData* FindCustomer(size_t id);
};

void AccountHandler:: MakeAccount() {
	size_t id;
	char name[kMaxNameLength];
	size_t balance;

	cout << " [계좌 개설] " << endl;
	cout << " 계좌 ID : "; cin >> id;
	cout << " 이름 : "; cin >> name;
	cout << "입금 액 : "; cin >> balance;
	cout << endl;

	mCustomerList[mSize++] = new AccountData(id, balance, name); // 클래스 객체 포인터 배열 할당
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
	size_t money;
	size_t id;
	cout << "[입 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "입금 액 :  "; cin >> money;

	AccountData* customer = FindCustomer(id);
	if (customer == nullptr) {
		cout << "유효하지 않은 ID 입니다." << endl << endl;
	} else {
		customer->Deposit(money);
		cout << "입금완료" << endl;
	}
}

// 고객 id가 존재하지 않으면 nullptr을 반환
AccountData* AccountHandler::FindCustomer(size_t id) {
	AccountData *result = nullptr;

	for (size_t i = 0; i < mSize; i++) {

		if (mCustomerList[i]->GetAccID() == id) {  //a -> b 는 (*a).b와 동일합니다. , accArr가 객체 포인터 배열로 선언되었기 때문에 .. 
			result = mCustomerList[i];
			break;
		}
	}

	return result;
}

void AccountHandler::WithdrawMoney() {

	size_t money;
	size_t id;

	cout << "[출 금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "출금 액 :  "; cin >> money;

	AccountData* customer = FindCustomer(id);
	if (customer == nullptr) {
		cout << "유효하지 않은 ID 입니다. " << endl << endl;
		return;
	} 

	if (customer->WithDraw(money) == 0) {
		cout << "잔액 부족" << endl << endl;
	} else {
		cout << "출금 완료" << endl << endl;
	}
}

void AccountHandler:: ShowAllAccInfo() {
	for (size_t i = 0; i < mSize; i++) {
		mCustomerList[i]->showAccInfo(); //(*mCustomerList[i].showAccInfo() 와 동일) , 즉 mCustomerList[i]는 주소다. 
		cout << endl;
	}
}

AccountHandler::~AccountHandler() {
	for (size_t i = 0; i < mSize; i++) {
		delete mCustomerList[i];
	}
}

int main(void) {

	size_t choice;
	AccountHandler obj1;

	bool repeat = true;
	while (repeat)
	{
		obj1.ShowMenu();
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case kMake:
			obj1.MakeAccount();
			break;

		case kDeposit:
			obj1.DepositMoney();
			break;

		case kWithdraw:
			obj1.WithdrawMoney();
			break;

		case kInquire:
			obj1.ShowAllAccInfo();
			break;

		case kExit:
			repeat = false;
			break;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;
}

