#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string t("ABC");

	string s1("Hello!");
	string s2("Hello!");
	string s3("Hello!");
	string s4("Hello!");
	string s5("Hello!");
	string s6("Hello!");
	string s7("Hello!");
	string s8("Hello!");
	string s9("Hello!");
	string s10("Hello!");

	s1.replace(0, 3, "ABC");
	s2.replace(0, 3, t);
	s3.replace(0, 3, "ABC", 2); //0����ġ�� 3���� ���ڿ��� ABC�� 2��(AB)�� ��ü
	s4.replace(0, 3, t, 0, 2);

	s5.replace(0, 3, 2, 'A'); //0����ġ�� 3�� ���ڿ��� 2���� A�� ��ü
	s6.replace(s6.begin(), s6.begin() + 3, "ABC");
	s7.replace(s7.begin(), s7.begin() + 3, t);
	s8.replace(s8.begin(), s8.begin() + 3, "ABC", 2);
	s9.replace(s9.begin(), s9.begin() + 3, 3, 'A');
	s10.replace(s10.begin(), s10.end(), t.begin(), t.end());

	return 0;

}