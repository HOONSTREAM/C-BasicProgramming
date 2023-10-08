#include <iostream>
#include <string> 
using namespace std;

int main(void) {

	string s ("Hello!");
	const char* sz;
	const char* buf;

	sz = s.c_str();
	buf = s.data();

	cout << "\0 문자로 끝나는 문자열 (C-Style) : " << sz << endl;
	cout << "\0 문자를 포함하지 않는 문자열 :" << buf << endl;
	

	return 0;

	//\0 문자를 포함한 문자열이 필요하다면 c_str() 멤버함수를 사용한다.


}