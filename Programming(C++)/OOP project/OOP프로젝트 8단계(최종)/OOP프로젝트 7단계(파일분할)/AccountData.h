#pragma once

class AccountData {

private:
	int accID; // 계좌 ID
	int balance; // 계좌 잔액
	char* cusname; //예금주 이름

public:
	AccountData(int ID, int money, char* name); // 생성자
	AccountData(const AccountData& copy); //복사생성자
	AccountData& operator=(const AccountData& ref); // 대입 연산자

	int GetAccID() const; // AccID(계좌ID)를 얻는 겟함수
	int WithDraw(int money); //출금함수
	void showAccInfo() const; //계좌정보
	~AccountData(); //소멸자
	virtual void Deposit(int money); // 입금 가상함수
};