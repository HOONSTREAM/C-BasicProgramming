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

		cout << "MyFriendInfo 생성자 호출" << endl;

	}

	~MyFriendInfo() {

		delete[]name;
		cout << "My  Friend Info 소멸자 호출" << endl;

	}


	void ShowMyFriendInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

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
		cout << "myFriendDetailinfo 생성자 호출 " << endl;

	}

	~MyFriendDetailInfo() {

		delete[] addr;
		delete[] phone;

		cout << "myfrienddetailinfo 소멸자 호출" << endl;

	}

	void showMyFriendDetailInfo() {

		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화 : " << phone << endl;

	}
};

int main(void) {

	MyFriendDetailInfo f1 ("LEE", 22, "대흥동", "010-1234-4566");
	f1.showMyFriendDetailInfo();


}