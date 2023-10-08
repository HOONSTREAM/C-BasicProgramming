#include "계좌관리 프로그램 헤더.h"

#ifndef __struct.h__
#define __struct.h__
typedef struct 
{
	int accID; // 계좌번호
	int balance; //잔액
	char cusName[NAME_LEN]; // 고객 이름

}Account;

Account accArr[100]; // Account 저장 배열
int accnum = 0; // 저장된 Account 수

#endif
