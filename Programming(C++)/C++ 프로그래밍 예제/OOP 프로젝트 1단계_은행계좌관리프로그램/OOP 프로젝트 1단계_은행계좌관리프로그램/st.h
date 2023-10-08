#pragma once

typedef struct
{
	int accID; // 계좌번호
	int balance; //잔액
	char cusName[NAME_LEN]; // 고객 이름

}Account;

Account accArr[100]; // Account 저장 배열
int accnum = 0; // 저장된 Account 수

