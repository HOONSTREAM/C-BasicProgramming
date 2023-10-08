#include <iostream>
using namespace std;

class Sosimple {

private: int num;

public:

	Sosimple(int n) :num(n) {}

	Sosimple(Sosimple& copy) : num(copy.num) {

		cout << "복사 생성자의 호출" << endl;

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
	cout << "함수 호출 전" << endl;
	SimpleFuncobj(obj); //ob라는 객체를 생성하면서 obj로 초기화
	cout << "함수 호출 후" << endl;

	return 0;

}