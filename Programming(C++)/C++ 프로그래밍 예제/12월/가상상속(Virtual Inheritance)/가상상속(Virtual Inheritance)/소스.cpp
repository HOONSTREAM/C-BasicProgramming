#include <iostream>
using namespace std;

class Base {

public :
	Base() { cout << "Base의 생성자가 호출됨" << endl; }
	void SimpleFunc() { cout << "Base의 SimpleFunc()" << endl;}

};

class MiddleDerivedOne :  public Base {

public :
	MiddleDerivedOne() : Base() { cout << "MiddleDerivedOne 의 생성자가 호출됨" << endl; }

	void MiddleFuncOne() {

		SimpleFunc();
		cout << "MiddleFuncOne이 호출되어 SimpleFunc가 호출되었음." << endl;
	}

};

class MiddleDerivedTwo :  public Base {

public :
	MiddleDerivedTwo() :Base() {
		cout << "MiddleDerivedTwo 생성자가 호출되었음" << endl;
	}

	void MiddleFuncTwo() {

		SimpleFunc();
		cout << "MiddleFuncTwo가 호출되어 SimpleFunc가 호출되었음" << endl;
	}
};

class LastDerived :public MiddleDerivedOne, public MiddleDerivedTwo {

public :
	LastDerived() :MiddleDerivedOne(), MiddleDerivedTwo() {
		cout << "LaseDerived 생성자가 호출됨" << endl;

	}

	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc(); // Middle One 과 Two에 각각 Base멤버가 하나씩 존재하여 어느클래스를 통해 간접상속한 Base클래스의 멤버함수를 호출할지 모호해짐.
		// 컴파일 에러! (가상상속을 활용해야함)
	}
};

int main(void) {

	cout << "객체 생성 전" << endl;
	LastDerived ldr;
	cout << "객체 생성 후" << endl;
	ldr.ComplexFunc();

	return 0;

}