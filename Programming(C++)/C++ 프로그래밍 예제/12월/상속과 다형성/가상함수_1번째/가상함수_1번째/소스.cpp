#include <iostream>
using namespace std;

class Base {

public :
	void BaseFunc() {

		cout << "Base Function" << endl;

	}

};

class Derived :public Base {

public :
	void DerivedFunc() {

		cout << "Derived Function" << endl;

	}

};

int main(void) {
	// C++ 컴파일러는 포인터연산의 가능성 여부를 판단할때에 포인터의 자료형을 기준으로 판단함. (실제 가리키는 객체의 자료형을 기준으로 판단하지 않음.)
	


	Derived* ptr2 = new Derived();
	Base* ptr1 = ptr2;


}