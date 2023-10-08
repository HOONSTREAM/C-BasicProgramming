// 이니셜라이저의 특징은 멤버변수로 참조자를 선언할 수 있음.
#include <iostream>
using namespace std;

class AAA
{

public :
	AAA() // 디폴트 생성자
	{
		cout << "empty object" << endl;

	}

	void ShowYourname() {
		
		cout << "I'm class AAA" << endl;

	}
};

class BBB {

private:
	AAA &ob;
	const int& num;

public:
	BBB(AAA& r, const int& n) :ob(r), num(n) {}

	void ShowYourname() {

		ob.ShowYourname();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
	};

int main(void) {

	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourname();

	return 0;
}