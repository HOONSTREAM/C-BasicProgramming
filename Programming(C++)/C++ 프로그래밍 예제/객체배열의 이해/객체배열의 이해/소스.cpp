/*strcpy(���ڿ� �迭 A, ���ڿ� B);
A���ٰ� B�� �����ϰڴٴ� ���Դϴ�. , strlen ���ڿ� ���̸� �˷��ݴϴ�.*/


#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)
class person {

private:
	
	char* name;
	int age;

public :
	person(const char* myname, int myage) :age(myage) {

		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
		
	}

	person() {

		name = NULL;
		age = 0;
		cout << "�����ڰ� ȣ���" << endl;

	}

	void setpersoninfo(char* myname, int myage) {

		name = myname;
		age = myage;

	}

	void showpersoninfo() const {

		cout << "�̸� :" << name << ",";
		cout << "���� : " << age << endl;

	}
	~person() //�Ҹ���
	{

		delete[]name;
		cout << "�Ҹ��ڰ� ȣ���" << endl;

	}
};

int main(void) {

	person parr[3];
	
	char *strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸� : ";
		cin >> strptr;
	
		cout << "���� : ";
		cin >> age;

		// �ּҰ� 

		parr[i].setpersoninfo(strptr, age);

	}

	parr[0].showpersoninfo();
	parr[1].showpersoninfo();
	parr[2].showpersoninfo();


	return 0;

}

