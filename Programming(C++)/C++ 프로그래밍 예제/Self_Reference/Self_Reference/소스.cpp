#include <iostream>
using namespace std;

class SelfRef {

private:
	int num;

public:
	SelfRef(int n) : num(n)
	{
		cout << "객체 생성" << endl;

	}

	SelfRef& Adder(int n) { //객체 자신을 참조할 수 있는 참조의 정보가 반환됨.

		this->num += n;

		return *this;

	}

	SelfRef& ShowTwonumber() {

		cout << num << endl;

		return *this;

	}
};

int main(void) {

	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwonumber();
	obj.ShowTwonumber();
	ref.ShowTwonumber();

	ref.Adder(1).ShowTwonumber().Adder(2).ShowTwonumber();

	
}