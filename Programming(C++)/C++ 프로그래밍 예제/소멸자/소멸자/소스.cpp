#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

class person {

private :
	char* name;
	int age;

public:
	person(const char* myname, int myage) :age(myage) {

		
		name = new char[strlen(myname)+1];
		strcpy(name, myname);
		

	}

	void ShowpersonInfo()  {

		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}

	~person()
	{
		delete[]name;
		cout << "called Destructor" << endl;

	}
};

int main(void) {


	person man1("Lee", 29);
	person man2("Jang", 41);
	man1.ShowpersonInfo();
	man2.ShowpersonInfo();

	return 0;

}
