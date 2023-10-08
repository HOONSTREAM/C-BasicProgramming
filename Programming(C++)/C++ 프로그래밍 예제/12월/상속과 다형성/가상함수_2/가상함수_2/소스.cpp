//C++ 컴파일러는 포인터를 이용한 연산의 가능성 여부를 판단할때, 포인터의 자료형을 기준으로 판단/ 실제 가리키는 객체를 기준으로 판단하지 않는다.
#include <iostream>
using namespace std;

class First {

public :
	virtual void MyFunc() {

		cout << "FirstFunc" << endl;

	}
};

class Second : public First {

public :

	virtual void MyFunc() {
		
		cout << "Secondfunc" << endl;

	}
};

class Third :public Second {

public :

	virtual void MyFunc() {

		cout << "Third Func " << endl;

	}
};

int main(void) {

	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc(); // First의 MYFunc와 Second MyFunc가 모두 해당이 되는데, 오버라이딩에 의해 유도클래스의 MyFunc가 호출되는 것이다.
	tptr->MyFunc();

	delete tptr;

	return 0;

}