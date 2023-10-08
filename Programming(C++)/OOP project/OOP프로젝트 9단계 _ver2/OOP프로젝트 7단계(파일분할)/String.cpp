#include "String.h"

String::String() { //void 생성자, 문자열로 초기화되지 않은 string 객체를 생성할 수 있도록 생성자 오버로딩(디폴트매개변수, 매개변수 갯수, 형태 ...)을 한 것이다. 

	len = 0;
	str = NULL;

}

String::String(const char* s) {

	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
}

String::String(const String& copy) {

	len = copy.len;
	str = new char[copy.len];
	strcpy(str, copy.str);

}

String::~String() {

	if (str != NULL)
		delete[] str;
}

String& String::operator=(const String& s) { //대입 연산자의 정의

	if (str != NULL) //기존에 가리키고있던 메모리를 해지한다. (메모리 릭 방지)
		delete[] str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);

	return *this;

}

String& String::operator+=(const String& s) {

	len += (s.len - 1); //NULL 문자는 2개일 필요가 없으므로
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str != NULL)
		delete[] str;

	str = tempstr;

	return *this;

}

bool String::operator==(const String& s)
{
	return strcmp(str, s.str) ? false : true; //strcmp함수가 같은경우에는 0을 반환하므로 false를 놓은 것.

}

String String::operator+ (const String& s) {

	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr); // String temp = tempstr;
	delete[]tempstr;

	return temp;

}

ostream& operator <<(ostream& os, const String& s) {

	os << s.str;

	return os;
}


istream& operator>> (istream& is, String& s) {

	char str[100];
	is >> str;
	s = String(str); //임시객체

	return is;

}