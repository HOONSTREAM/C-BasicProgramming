#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b) {

	return a > b ? a : b;

}

template<>
char* Max<char*>(char* a, char* b) { //char*�� �Լ��� ���ؼ��� ���� �������״�, ������ ���ø��� �������� �̰��� ����϶�! <Ư��ȭ>
	//�������̸� �ڷ��� ������ ����ϴ� ���� ���� ��Ȯ�� �ϴ� ����� �ȴ�.

	cout << "char* �� ���ø��Լ� �������� " << endl;

	return strlen(a) > strlen(b) ? a : b;

}

template<> //���ø��� Ư��ȭ

const char* Max<const char*>(const char* a, const char* b) { //const char*���� ���ؼ��� ���� �������״�, ������ ���ø��� �������� �̰��� ����϶�! <Ư��ȭ>
	//�������̸� �ڷ��� ������ ��� �ϴ� ���� ���� ��Ȯ�� �ϴ� ����� �ȴ�.

	cout << "const char* �� ���ø� �Լ� ��������" << endl;

	return strcmp(a, b) > 0 ? a : b;

}

int main(void) {

	cout << Max(11, 15) << endl;
	cout << Max("simple", "best") << endl; //���ڿ� ���

	char str1[] = "simple"; //���ڿ� ����
	char str2[] = "best"; //���ڿ� ����

	cout << Max(str1, str2) << endl;

	return 0;



}