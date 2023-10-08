#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string t("Hello!");
	const char* p1 = "Hello!";
	const char* p2 = p1 + 6; //end 

	string s1;
	string s2("Hello!");
	string s3("Hello!", 2); // Hello 문자열에서 2개의 문자열로 s를 생성
	string s4(4, 'H'); //4개의 H를 생성
	string s5(t.begin(), t.end()); // t의 [begin(),end())를 출력
	string s6(p1, p2); //포인터 p1부터 p2까지의 문자열을 출력

	//s :string 객체, sz : \0 문자열 , c : 문자, n :길이, iter : 반복자, p : 포인터

	cout << "s1() : " << s1 << endl;
	cout << "s2(sz) : " << s2 << endl;
	cout << "s3(sz,n) : " <<s3<< endl;
	cout << "s4(n,c) : " << s4 << endl;
	cout << "s5(iter,iter2) : " << s5 << endl;
	cout << "s6(p1,p2) : " << s6 << endl;


	return 0;

}