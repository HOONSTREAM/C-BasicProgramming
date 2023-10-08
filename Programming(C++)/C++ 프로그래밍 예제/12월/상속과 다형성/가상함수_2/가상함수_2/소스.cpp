//C++ �����Ϸ��� �����͸� �̿��� ������ ���ɼ� ���θ� �Ǵ��Ҷ�, �������� �ڷ����� �������� �Ǵ�/ ���� ����Ű�� ��ü�� �������� �Ǵ����� �ʴ´�.
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
	sptr->MyFunc(); // First�� MYFunc�� Second MyFunc�� ��� �ش��� �Ǵµ�, �������̵��� ���� ����Ŭ������ MyFunc�� ȣ��Ǵ� ���̴�.
	tptr->MyFunc();

	delete tptr;

	return 0;

}