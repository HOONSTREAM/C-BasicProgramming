#include "String.h"

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

	if (str != NULL)
		delete[] str;
}

String& String::operator=(const String& s) { //���� �������� ����

	if (str != NULL) //������ ����Ű���ִ� �޸𸮸� �����Ѵ�. (�޸� �� ����)
		delete[] str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);

	return *this;

}

String& String::operator+=(const String& s) {

	len += (s.len - 1); //NULL ���ڴ� 2���� �ʿ䰡 �����Ƿ�
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
	return strcmp(str, s.str) ? false : true; //strcmp�Լ��� ������쿡�� 0�� ��ȯ�ϹǷ� false�� ���� ��.

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