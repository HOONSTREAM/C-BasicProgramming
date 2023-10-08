#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable :4996)

class String {

private :
	int len;
	char* str; 

public :

	String();
	String(const char* s);
	String(const String& copy);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator + (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, const String& s);

};

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

	if(str!=NULL)
	delete[] str;
}

String& String::operator= (const String& s) { //대입 연산자의 정의

	if (str != NULL)
		delete[] str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);

	return *this;
}

String& String::operator+= (const String& s) {

	len += (s.len - 1);
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
	return strcmp(str, s.str) ? false : true;

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

int main(void) {

	string str1 = "I like";
	string str2 = "string class";

	string str3 = str1 + str2; //str1.operator+(str2); -> 이 과정에서 복사생성자가 호출된다.

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2; //str1.operator+=(str2);

	if (str1 == str3)
		cout << "동일 문자열" << endl;
	else
		cout << "동일하지 않은 문자열" << endl;

	string str4;
	cout << "문자열 입력 : " << endl;
	cin >> str4;
	cout << "입력한 문자열 : " << str4 << endl;

	return 0;

}
