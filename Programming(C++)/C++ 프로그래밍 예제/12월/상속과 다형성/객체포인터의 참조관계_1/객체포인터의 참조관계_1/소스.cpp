#include<iostream>
using namespace std;

class Person {

public :
	void sleep() { cout << "sleep !" << endl; }

};

class student :public Person
{

public :
	
	void study() { cout << "study!" << endl; }

};

class PartTimeStudent :public student {

public :
	
	void Work() { cout << "work !" << endl; }

};

int main(void) {

	Person* ptr1 = new student();
	Person* ptr2 = new PartTimeStudent();
	student* ptr3 = new PartTimeStudent();


	ptr1->sleep();
	ptr2->sleep();
	ptr3->study();

	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;



}