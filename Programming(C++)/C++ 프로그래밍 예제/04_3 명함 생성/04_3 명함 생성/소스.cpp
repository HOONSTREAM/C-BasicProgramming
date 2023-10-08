#pragma warning(disable:4996)
#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS {


	enum CLASS {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER

	};

	void ShowPositionInfo(int pos)
	{
		switch (pos) {
		case CLERK:
			cout << "���" << endl;
			break;

		case SENIOR:
			cout << "����" << endl;
			break;

		case ASSIST:
			cout << "�븮" << endl;
			break;

		case MANAGER:
			cout << "����" << endl;
			break;
		}

		}
	}


class NameCard {

private :
	char* name;
	char* company;
	char* phone;
	int CLASS;


public :
	NameCard(const char* myname, const char* mycompany, const char* myphone, int Myclass) :CLASS(Myclass) {

		name = new char[strlen(myname) + 1];
		company = new char[strlen(mycompany) + 1];
		phone = new char[strlen(myphone) + 1];
		strcpy(name, myname);
		strcpy(company, mycompany);
		strcpy(phone, myphone);
	}

	void ShowNameCardInfo() const {

		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		cout << "���� : ";  COMP_POS::ShowPositionInfo(CLASS);

	}

	~NameCard() //�Ҹ���
	{
		delete[]name;
		delete[]company;
		delete[]phone;

	}


};

int main(void) {

	NameCard man1("�̽���","ȸ���", "010-5176-7982",0 );
	man1.ShowNameCardInfo();



	return 0;

}

