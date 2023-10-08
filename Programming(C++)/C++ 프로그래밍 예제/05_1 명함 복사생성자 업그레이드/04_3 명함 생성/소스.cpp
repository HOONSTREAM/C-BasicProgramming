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
		strcpy(this->name, myname); //(*this)-name 과 동일 this는 타입과 name의 주소를 저장
		strcpy(company, mycompany);
		strcpy(phone, myphone);
	}

	/*NameCard(const NameCard& copy) :CLASS(copy.CLASS) { //깊은복사를 위한 복사생성자 정의

		name = new char[strlen(copy.name) + 1];
		company = new char[strlen(copy.company) + 1];
		phone= new char[strlen(copy.phone) + 1];
		strcpy(name, copy.name);
		strcpy(company, copy.company);
		strcpy(phone, copy.phone);

	}*/

	
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

		cout << "소멸자 호출 완료" << endl;

	}


};

int main(void) {

	NameCard man1("이승훈","회사원", "010-5176-7982",COMP_POS::ASSIST);
	NameCard copy1(man1);
	NameCard man2("김소라", "회사원", "010-9098-0598", COMP_POS::SENIOR);
	NameCard copy2(man2);
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();




	return 0;

}

