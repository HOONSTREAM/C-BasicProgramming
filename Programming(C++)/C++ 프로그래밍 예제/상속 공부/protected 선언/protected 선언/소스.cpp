// protected로 선언된 멤버변수는 상속하는 유도클래스에서 직접접근이 가능하다.
//protected 상속은 protected보다 접근범위가 넓은 멤버는 모두 protected로 변경시켜서 상속하겠다는 뜻.
#include <iostream>
using namespace std;

class Base {

private :
	int num1;
protected :
    int num2;
public :
	int num3;

	Base() : num1(1), num2(2), num3(3) {}


};

class Derived : protected Base {};

int main(void) {

	Derived drv;

	cout << drv.num2 << endl;
	// protected 멤버변수는 유도되는 클래스에서 직접 접근이 가능 / 외부에서 접근불가능 (private 와 동일)

	return 0;
}