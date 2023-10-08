//이름공간이 중첩되면서까지 과도하게 사용되는 경우는 극히 드물지만, 상황에 의해서 과도하게 사용이 되었을때,
// 별칭을 지정할수 있는 예제

#include <iostream>
using namespace std;

namespace AAA {

	namespace BBB {

		namespace CCC {

			int num1;
			int num2;

		}
	}
}

int main(void) {

	AAA::BBB::CCC::num1 = 10;
	AAA::BBB::CCC::num2 = 20;

	namespace ABC = AAA::BBB::CCC; // 네임스페이스의 별칭 지정

	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;


	return 0;

}