#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable :4996)
// public 상속하더라도 멤버변수에는 직접 접근이 불가능하다.
// 멤버함수를 통해서 간접적 접근이 가능하다.
class Person {

private :

	int age;
	char* name;

public :

	Person(int myage, const char* myname) : age(myage) {

		name = new char[strlen(myname) + 1];
		strcpy(name, myname);

	}

	void WhatYourname() const {

		cout << "my name is " << name << endl;


	}

	void HowoldAreYou() const {
		
		cout << "I'm" << age << "years old" << endl;

	}

	~Person() {

		delete[]name;

	}
};

class UnivStudent : public Person {

private :

	char* major;

public :

	UnivStudent(const char* myna, int myag, const char* mymajor) :Person(myag, myna) {

		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);

	}

	void WhoAreYou() const {

		WhatYourname();
		HowoldAreYou();
		cout << "my major is" << major << endl;

	}

	~UnivStudent() {

		delete[]major;

	}
};


int main(void) {


	UnivStudent ustd1("Lee", 22, "computer eng");
	ustd1.WhoAreYou();
	


	return 0;


}