#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable : 4996)

class MyFriendInfo {

private : 

	char* name;
	int age;

public :

	MyFriendInfo(char* myname, int myage) : age(myage) {

		name = new char[strlen(myname) + 1];
		strcpy(name, myname);

		cout << "MyFriendInfo ������ ȣ��" << endl;

	}

	~MyFriendInfo() {

		delete[]name;
		cout << "My  Friend Info �Ҹ��� ȣ��" << endl;

	}


	void ShowMyFriendInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;

	}
};


class MyFriendDetailInfo : public MyFriendInfo {

private :

	char* addr;
	char* phone;

public :

	MyFriendDetailInfo(char* myname, int myage, char* myaddr, char* myphone) : MyFriendInfo(myname, myage) {

		addr = new char[strlen(myaddr) + 1];
		phone = new char[strlen(myphone) + 1];
		strcpy(addr, myaddr);
		strcpy(phone, myphone);
		cout << "myFriendDetailinfo ������ ȣ�� " << endl;

	}

	~MyFriendDetailInfo() {

		delete[] addr;
		delete[] phone;

		cout << "myfrienddetailinfo �Ҹ��� ȣ��" << endl;

	}

	void showMyFriendDetailInfo() {

		ShowMyFriendInfo();
		cout << "�ּ� : " << addr << endl;
		cout << "��ȭ : " << phone << endl;

	}
};

int main(void) {

	MyFriendDetailInfo f1 ("LEE", 22, "���ﵿ", "010-1234-4566");
	f1.showMyFriendDetailInfo();


}