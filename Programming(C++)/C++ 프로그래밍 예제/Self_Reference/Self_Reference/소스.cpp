#include <iostream>
using namespace std;

class SelfRef {

private:
	int num;

public:
	SelfRef(int n) : num(n)
	{
		cout << "��ü ����" << endl;

	}

	SelfRef& Adder(int n) { //��ü �ڽ��� ������ �� �ִ� ������ ������ ��ȯ��.

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