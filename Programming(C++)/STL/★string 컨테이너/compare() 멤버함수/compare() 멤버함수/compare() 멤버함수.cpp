#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string s1("��");
	string s2( "��");
	const char* sz = "AKCDE";

	cout << "s1.compare(s) : " << s1.compare(s2) << endl; //s1<s2 
	//cout << "s1.compare(off,n,s) : " << s1.compare(2, 3, s2) << endl; //ABCDE �� CD  s1>s2
	//cout << "s1.compare(off,n,s,off2,n2) : " << s1.compare(0, 3, s2, 2, 3) << endl; //s1���ڿ��� 0~3 �� s2 ���ڿ��� 2~3 �� ABCD,CD �� 
	//cout << "s1.compare(sz) : " << s1.compare(sz) << endl;
	//cout << "s1.compare(off,n,sz) : " << s1.compare(2, 3, sz) << endl;
	//cout << "s1.compare(0,1,sz,1) : " << s1.compare(0, 1, sz, 1) << endl;


	return 0;

}