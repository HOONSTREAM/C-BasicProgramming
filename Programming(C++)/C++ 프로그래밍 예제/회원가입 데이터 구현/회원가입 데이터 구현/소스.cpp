#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

enum Menu_Type {

	회원가입 = 1,
	회원정보,
	나가기

};


class Member {

private : 

	int USER_ID;
	int password;
	char* name;

public : 

	Member(int ID, int number, char* u_name) :USER_ID(ID), password(number)
	{
		name = new char[strlen(u_name) + 1];
		strcpy(name, u_name);
		cout << "생성자가 호출되었습니다" << endl;


	}

	Member(Member& copy) :USER_ID(copy.USER_ID), password(copy.password) {

		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);

		cout << " 복사생성자의 호출 " << endl;

	}

	void showuserData() const {

		cout << "아이디 : " << USER_ID << endl;
		cout << "비밀번호 : " << password << endl;
		cout << "이름 : " << name << endl;

	}

	int GetID() { return USER_ID; }
	int GetPassWord() { return password; }


	~Member() {

		delete[]name;

		cout << "소멸자 호출" << endl;


	}


};

int main(void) { //포인터 객체 생성 , 생성자에 대입할 변수 생성

	Member* Arr[100];
	char namestr[100];
	int ID;
	int password;

	for (int i = 0; i < 3; i++) {

		cout << "아이디를 입력하세요. (아이디는 숫자입니다.) : ";
		cin >> ID;
		cout << "비밀번호를 입력하세요. : ";
		cin >> password;
		cout << "이름을 입력하세요 : ";
		cin >> namestr;

		Arr[i] = new Member(ID, password, namestr);
	}

		Arr[0]->showuserData();




		delete Arr[0];


		return 0;

	}






