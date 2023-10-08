#include <iostream>
using namespace std;

class Sosimple {

private :
	int num;

public: 
	Sosimple(int n) :num(n) {}

	Sosimple(const Sosimple& copy) :num(copy.num)
	{
		cout << "복사 생성자의 호출" << endl;

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

	cout << "return 이전" << endl;

	return ob;

}

int main(void) {

	Sosimple obj(7);
	SimpleFuncObj(obj).Addnum(30).ShowData();
	obj.ShowData();

	return 0;

}