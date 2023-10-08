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
		strcpy(this->name, myname); //(*this)-name �� ���� this�� Ÿ�԰� name�� �ּҸ� ����
		strcpy(company, mycompany);
		strcpy(phone, myphone);
	}

	/*NameCard(const NameCard& copy) :CLASS(copy.CLASS) { //�������縦 ���� ��������� ����

		name = new char[strlen(copy.name) + 1];
		company = new char[strlen(copy.company) + 1];
		phone= new char[strlen(copy.phone) + 1];
		strcpy(name, copy.name);
		strcpy(company, copy.company);
		strcpy(phone, copy.phone);

	}*/

	
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

		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;

	}


};

int main(void) {

	NameCard man1("�̽���","ȸ���", "010-5176-7982",COMP_POS::ASSIST);
	NameCard copy1(man1);
	NameCard man2("��Ҷ�", "ȸ���", "010-9098-0598", COMP_POS::SENIOR);
	NameCard copy2(man2);
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();




	return 0;

}

