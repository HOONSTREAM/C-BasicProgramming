#include <iostream>
using namespace std;

class Sosimple {

private: int num;

public:

	Sosimple(int n) :num(n) {}

	Sosimple(Sosimple& copy) : num(copy.num) {

		cout << "���� �������� ȣ��" << endl;

	}

	void showData() const {

		cout << "num : " << num << endl;

	}
};

void SimpleFuncobj(Sosimple ob) {

	ob.showData();

}

int main(void) {

	Sosimple obj(7);
	cout << "�Լ� ȣ�� ��" << endl;
	SimpleFuncobj(obj); //ob��� ��ü�� �����ϸ鼭 obj�� �ʱ�ȭ
	cout << "�Լ� ȣ�� ��" << endl;

	return 0;

}