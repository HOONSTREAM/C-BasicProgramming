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
	// C++ �����Ϸ��� �����Ϳ����� ���ɼ� ���θ� �Ǵ��Ҷ��� �������� �ڷ����� �������� �Ǵ���. (���� ����Ű�� ��ü�� �ڷ����� �������� �Ǵ����� ����.)
	


	Derived* ptr2 = new Derived();
	Base* ptr1 = ptr2;


}