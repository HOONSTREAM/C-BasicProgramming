//�̸������� ��ø�Ǹ鼭���� �����ϰ� ���Ǵ� ���� ���� �幰����, ��Ȳ�� ���ؼ� �����ϰ� ����� �Ǿ�����,
// ��Ī�� �����Ҽ� �ִ� ����

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

	namespace ABC = AAA::BBB::CCC; // ���ӽ����̽��� ��Ī ����

	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;


	return 0;

}