#include <iostream>
using namespace std;

class AAA
{
private :
	int num;

public:
	AAA() :num(0) {}
	AAA &CreateInitObj(int n) const            // 참조반환을 지우고 값의 반환을 해도 실행은 되나, 성능에서의 차이가 있음.
	{
		AAA* ptr = new AAA(n);

		return *ptr;

	}

	void Shownum() const { cout << num << endl;}

private :
	AAA(int n):num(n){} // private 생성자

};

int main(void) {

	AAA base;
	base.Shownum();

	AAA &obj1 = base.CreateInitObj(3); //3을받을 수 있는 생성자를 찾아서 그 생성자를 호출하면서 3을 전달하겠다.
	obj1.Shownum();

}