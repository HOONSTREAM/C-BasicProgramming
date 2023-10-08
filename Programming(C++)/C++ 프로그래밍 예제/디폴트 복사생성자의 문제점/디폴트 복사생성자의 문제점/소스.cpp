#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)
class person {

private: char* name;
	   int age;

public :

	person(const char* myname, int myage) :age(myage) {

		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
		
	}

	person(const person& copy) :age(copy.age) {

		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);

	}

	void showData() const {

		cout << "이름 : " << endl;
		cout << "나이 : " << endl;


	}

	~person() {

		delete[]name;
		cout << "소멸자가 호출됨" << endl;

	}
};

int main(void) {

	person man1("Lee", 29);
	person man2(man1);
	man1.showData();
	man2.showData();


	return 0;

}