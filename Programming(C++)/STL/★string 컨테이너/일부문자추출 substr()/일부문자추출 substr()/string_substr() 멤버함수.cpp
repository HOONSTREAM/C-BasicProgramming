#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string t("Hello!");
	string s1, s2, s3, s4, s5;

	s1 = t.substr(0); //��ü ����
	s2 = t.substr(0, string::npos); //��ü����
	s3 = t.substr(0, 2); // index 0���� 2��
	s4 = t.substr(2, 3); //index 2���� 3��
	s5 = t.substr(2, string::npos);

	return 0;

}