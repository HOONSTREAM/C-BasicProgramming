#include <iostream>
#include <string> 
using namespace std;

int main(void) {

	string s ("Hello!");
	const char* sz;
	const char* buf;

	sz = s.c_str();
	buf = s.data();

	cout << "\0 ���ڷ� ������ ���ڿ� (C-Style) : " << sz << endl;
	cout << "\0 ���ڸ� �������� �ʴ� ���ڿ� :" << buf << endl;
	

	return 0;

	//\0 ���ڸ� ������ ���ڿ��� �ʿ��ϴٸ� c_str() ����Լ��� ����Ѵ�.


}