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
		cout << "복사생성자가 호출됨" << endl;

	}

	void showData() const {

		cout << num1 << endl;
		cout << num2 << endl;

	}
};

int main(void) {

	Sosimple sim1(15, 30);
	cout << " 생성 및 초기화 직전" << endl;
	Sosimple sim2 = sim1; // Sosimple sim2(sim1)로 묵시적 변환이 되어서 객체가 생성된다.
	cout << "생성 및 초기화 직후" << endl;

	sim2.showData();

	return 0;

}