#pragma once
#include "BankingCommonDec1.h"

using namespace std;
#pragma warning(disable :4996)

class String {

private:
	int len;
	char* str;

public:

	String(); //void 생성자
	String(const char* s);
	String(const String& copy); //복사생성자
	~String();// 소멸자
	String& operator= (const String& s); //대입연산자
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator + (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is,  String& s);

};
#pragma once
