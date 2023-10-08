#include <iostream>
#include <cstring>
using namespace std;

class Sosimple {

private:
	int num;
public :
	Sosimple(int n) :num(n)
	{
		cout << "num : " << num << endl;
		cout << "address : " << this << endl;

	}

	void ShowSimpleData() {

		cout << num << endl;

	}

	Sosimple* GetThisPointer() {

		return this; // �ּҰ��� ��ȯ�ϴ� ���̹Ƿ� 

	}
};

int main(void) {

	Sosimple sim1(100);
	Sosimple* ptr1 = sim1.GetThisPointer(); // sim1 ��ü �ּҰ� ����
	cout << ptr1 << ",";
	ptr1->ShowSimpleData(); //ptr1�� ����Ű�� ��ü�� showsimpledata() �Լ��� ȣ���ϴ� ����.

	Sosimple sim2(200);
	Sosimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ",";
	ptr2->ShowSimpleData();

	return 0;


}