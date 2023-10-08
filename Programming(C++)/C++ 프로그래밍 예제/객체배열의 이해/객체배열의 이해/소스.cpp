/*strcpy(문자열 배열 A, 문자열 B);
A에다가 B를 복사하겠다는 뜻입니다. , strlen 문자열 길이를 알려줍니다.*/


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
		cout << "생성자가 호출됨" << endl;

	}

	void setpersoninfo(char* myname, int myage) {

		name = myname;
		age = myage;

	}

	void showpersoninfo() const {

		cout << "이름 :" << name << ",";
		cout << "나이 : " << age << endl;

	}
	~person() //소멸자
	{

		delete[]name;
		cout << "소멸자가 호출됨" << endl;

	}
};

int main(void) {

	person parr[3];
	
	char *strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름 : ";
		cin >> strptr;
	
		cout << "나이 : ";
		cin >> age;

		// 주소값 

		parr[i].setpersoninfo(strptr, age);

	}

	parr[0].showpersoninfo();
	parr[1].showpersoninfo();
	parr[2].showpersoninfo();


	return 0;

}

