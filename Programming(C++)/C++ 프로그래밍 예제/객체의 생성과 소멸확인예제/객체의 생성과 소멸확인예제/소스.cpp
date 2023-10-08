#include <iostream>
using namespace std;

class Sosimple {

private : 
	int num;

public:

	Sosimple(int n) :num(n) 
	{
		cout << "New object : " << this << endl;

	}

	Sosimple(const Sosimple& copy) : num(copy.num)
	{
		cout << "New Copy : " << this << endl;

	}

	~Sosimple()
	{
		cout << "Destroy obj : " << this << endl;

	}

};


Sosimple SimpleFuncObj(Sosimple ob) {

	cout << "Parm ADR : " << &ob << endl;

	return ob; //obj객체를 통한 ob객체의 복사가 이루어지며 임시객체가 반환된다. (ob는 지역적 선언이여서 소멸됨)
	//*this반환은 클래스내에서 멤버함수만 사용할 수 있음?
}

int main(void) {

	Sosimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;

	Sosimple tempRef = SimpleFuncObj(obj);

	cout << "Return Obj " << &tempRef << endl;

	return 0;


}