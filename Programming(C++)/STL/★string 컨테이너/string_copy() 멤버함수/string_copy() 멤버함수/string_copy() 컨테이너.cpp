#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string s("Hello!");
	char buf[100];

	//copy()�� ���� '\0'���ڸ� �������� �ʴ´�.
	s.copy(buf, s.length()); //length�� size�� ����.
	
	buf[s.length()] = '\0';

	cout << "��ü���ڿ�[copy(buf,n)] : " << buf << endl;

	s.copy(buf, 4, 2);
	buf[4] = '\0';
	cout << "�κй��ڿ� [copy(buf,n,off) ] : " << buf << endl;

	return 0;

}