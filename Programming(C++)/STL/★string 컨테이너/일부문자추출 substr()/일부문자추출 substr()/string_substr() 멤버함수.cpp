#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string t("Hello!");
	string s1, s2, s3, s4, s5;

	s1 = t.substr(0); //전체 추출
	s2 = t.substr(0, string::npos); //전체추출
	s3 = t.substr(0, 2); // index 0부터 2개
	s4 = t.substr(2, 3); //index 2부터 3개
	s5 = t.substr(2, string::npos);

	return 0;

}