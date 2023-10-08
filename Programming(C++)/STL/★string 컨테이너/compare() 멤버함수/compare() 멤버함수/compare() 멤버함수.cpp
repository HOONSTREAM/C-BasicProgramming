#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string s1("하");
	string s2( "마");
	const char* sz = "AKCDE";

	cout << "s1.compare(s) : " << s1.compare(s2) << endl; //s1<s2 
	//cout << "s1.compare(off,n,s) : " << s1.compare(2, 3, s2) << endl; //ABCDE 비교 CD  s1>s2
	//cout << "s1.compare(off,n,s,off2,n2) : " << s1.compare(0, 3, s2, 2, 3) << endl; //s1문자열의 0~3 와 s2 문자열의 2~3 비교 ABCD,CD 비교 
	//cout << "s1.compare(sz) : " << s1.compare(sz) << endl;
	//cout << "s1.compare(off,n,sz) : " << s1.compare(2, 3, sz) << endl;
	//cout << "s1.compare(0,1,sz,1) : " << s1.compare(0, 1, sz, 1) << endl;


	return 0;

}