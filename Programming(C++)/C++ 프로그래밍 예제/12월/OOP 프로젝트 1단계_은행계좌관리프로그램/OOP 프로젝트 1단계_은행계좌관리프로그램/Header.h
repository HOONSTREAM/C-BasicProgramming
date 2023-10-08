#include<iostream>
#include<cstring> // C 표준라이브러리 <string.h>를 포함하고 연결된 이름을 네임스페이스 std에 추가한다.


using namespace std;
const int NAME_LEN = 20; // const는	값을 상수로 선언할때 사용한다. 즉, 값을 변경할수 없게 만들 때 사용한다.

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
	

typedef struct
{
	int accID; // 계좌번호
	int balance; //잔액
	char cusName[NAME_LEN]; // 고객 이름

}Account;

Account accArr[100]; // Account 저장 배열
int accnum = 0; // 저장된 Account 수
