#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string t("Hello!");
	const char* p1 = "Hello!";
	const char* p2 = p1 + 6; //end 

	string s1;
	string s2("Hello!");
	string s3("Hello!", 2); // Hello ���ڿ����� 2���� ���ڿ��� s�� ����
	string s4(4, 'H'); //4���� H�� ����
	string s5(t.begin(), t.end()); // t�� [begin(),end())�� ���
	string s6(p1, p2); //������ p1���� p2������ ���ڿ��� ���

	//s :string ��ü, sz : \0 ���ڿ� , c : ����, n :����, iter : �ݺ���, p : ������

	cout << "s1() : " << s1 << endl;
	cout << "s2(sz) : " << s2 << endl;
	cout << "s3(sz,n) : " <<s3<< endl;
	cout << "s4(n,c) : " << s4 << endl;
	cout << "s5(iter,iter2) : " << s5 << endl;
	cout << "s6(p1,p2) : " << s6 << endl;


	return 0;

}