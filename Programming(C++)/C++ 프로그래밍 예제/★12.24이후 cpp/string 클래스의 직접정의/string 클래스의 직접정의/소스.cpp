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

String::String() { //void ������, ���ڿ��� �ʱ�ȭ���� ���� string ��ü�� ������ �� �ֵ��� ������ �����ε�(����Ʈ�Ű�����, �Ű����� ����, ���� ...)�� �� ���̴�. 

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

String& String::operator= (const String& s) { //���� �������� ����

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
	s = String(str); //�ӽð�ü

	return is;

}

int main(void) {

	string str1 = "I like";
	string str2 = "string class";

	string str3 = str1 + str2; //str1.operator+(str2); -> �� �������� ��������ڰ� ȣ��ȴ�.

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2; //str1.operator+=(str2);

	if (str1 == str3)
		cout << "���� ���ڿ�" << endl;
	else
		cout << "�������� ���� ���ڿ�" << endl;

	string str4;
	cout << "���ڿ� �Է� : " << endl;
	cin >> str4;
	cout << "�Է��� ���ڿ� : " << str4 << endl;

	return 0;

}
