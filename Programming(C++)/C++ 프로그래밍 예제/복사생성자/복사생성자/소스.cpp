/*멤버변수가 힙의 메모리공간을 참조하지않는다면 얕은복사에 문제가 없다.
멤버 대 멤버의 복사이기 때문에 객체 sim1의 num1,num2를 가리키는 주소값을 sim2,sim3도 같이 할당받는다.*/

#include <iostream>
using namespace std;

class Sosimple {

private : 
	int num1;
	int num2;

public :
	Sosimple(int n1, int n2) : num1(n1), num2(n2) {}

	void showData() {

		cout << num1 << endl;
		cout << num2 << endl;

	}
};

int main(void) {

	Sosimple sim1(15, 30);
	Sosimple sim2 = sim1;
	Sosimple sim3(sim2);

	sim1.showData();
	sim2.showData();
	sim3.showData();

	return 0;

}