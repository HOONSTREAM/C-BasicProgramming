#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

enum Menu_Type {

	ȸ������ = 1,
	ȸ������,
	������

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
		cout << "�����ڰ� ȣ��Ǿ����ϴ�" << endl;


	}

	Member(Member& copy) :USER_ID(copy.USER_ID), password(copy.password) {

		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);

		cout << " ����������� ȣ�� " << endl;

	}

	void showuserData() const {

		cout << "���̵� : " << USER_ID << endl;
		cout << "��й�ȣ : " << password << endl;
		cout << "�̸� : " << name << endl;

	}

	int GetID() { return USER_ID; }
	int GetPassWord() { return password; }


	~Member() {

		delete[]name;

		cout << "�Ҹ��� ȣ��" << endl;


	}


};

int main(void) { //������ ��ü ���� , �����ڿ� ������ ���� ����

	Member* Arr[100];
	char namestr[100];
	int ID;
	int password;

	for (int i = 0; i < 3; i++) {

		cout << "���̵� �Է��ϼ���. (���̵�� �����Դϴ�.) : ";
		cin >> ID;
		cout << "��й�ȣ�� �Է��ϼ���. : ";
		cin >> password;
		cout << "�̸��� �Է��ϼ��� : ";
		cin >> namestr;

		Arr[i] = new Member(ID, password, namestr);
	}

		Arr[0]->showuserData();




		delete Arr[0];


		return 0;

	}






