#include <iostream>
using namespace std;

class Sosimple {

private :
	int num1;
	int num2;

public:
	Sosimple(int n1, int n2) :num1(n1), num2(n2) {}
	Sosimple(Sosimple& copy) :num1(copy.num1), num2(copy.num2)
	{
		cout << "��������ڰ� ȣ���" << endl;

	}

	void showData() const {

		cout << num1 << endl;
		cout << num2 << endl;

	}
};

int main(void) {

	Sosimple sim1(15, 30);
	cout << " ���� �� �ʱ�ȭ ����" << endl;
	Sosimple sim2 = sim1; // Sosimple sim2(sim1)�� ������ ��ȯ�� �Ǿ ��ü�� �����ȴ�.
	cout << "���� �� �ʱ�ȭ ����" << endl;

	sim2.showData();

	return 0;

}