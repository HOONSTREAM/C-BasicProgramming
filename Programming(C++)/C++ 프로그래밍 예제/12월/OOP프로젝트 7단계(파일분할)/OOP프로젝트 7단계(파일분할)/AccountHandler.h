#pragma once
#include "AccountData.h"

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
	void AddAccount(AccountData* emp);
	void MakeNormalAccount();
	void MakeCreditAccount();

};
