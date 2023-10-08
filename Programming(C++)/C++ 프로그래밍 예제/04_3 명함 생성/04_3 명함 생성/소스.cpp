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
			cout << "사원" << endl;
			break;

		case SENIOR:
			cout << "주임" << endl;
			break;

		case ASSIST:
			cout << "대리" << endl;
			break;

		case MANAGER:
			cout << "과장" << endl;
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

		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << phone << endl;
		cout << "직급 : ";  COMP_POS::ShowPositionInfo(CLASS);

	}

	~NameCard() //소멸자
	{
		delete[]name;
		delete[]company;
		delete[]phone;

	}


};

int main(void) {

	NameCard man1("이승훈","회사원", "010-5176-7982",0 );
	man1.ShowNameCardInfo();



	return 0;

}

