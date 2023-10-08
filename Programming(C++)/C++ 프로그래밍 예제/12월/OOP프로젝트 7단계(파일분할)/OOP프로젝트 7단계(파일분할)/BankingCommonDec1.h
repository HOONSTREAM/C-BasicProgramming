#pragma once

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
enum { NORMAL = 1, CREDIT = 2 };
//신용 등급
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };

