#include <iostream>
using namespace std;

class Sosimple {

private :
	int num;

public: 
	Sosimple(int n) :num(n) {}

	Sosimple(const Sosimple& copy) :num(copy.num)
	{
		cout << "���� �������� ȣ��" << endl;

	}

	Sosimple& Addnum(int n) {

		num += n;

		return *this;

	}

	void ShowData() const {

		cout << "num : " << num << endl;

	}

};

Sosimple SimpleFuncObj(Sosimple ob) {

	cout << "return ����" << endl;

	return ob;

}

int main(void) {

	Sosimple obj(7);
	SimpleFuncObj(obj).Addnum(30).ShowData();
	obj.ShowData();

	return 0;

}