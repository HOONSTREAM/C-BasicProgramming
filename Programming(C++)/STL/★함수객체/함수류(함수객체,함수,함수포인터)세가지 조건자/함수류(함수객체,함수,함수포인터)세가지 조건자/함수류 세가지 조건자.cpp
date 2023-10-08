/*�Լ���(�Լ���ü,�Լ�,�Լ�������) �����ڷ� ������ �Ǵ��ϴ� ����*/
#include <iostream>
using namespace std;

struct LessFunctor {

	bool operator() ( int left, int right) const {

		return left < right;
	}
};

bool LessFun(int left, int right)  {

	return left < right;
}


int main(void) {

	bool (*LessPTR)(int, int) = LessFun; //�Լ� ������(�Լ��� �ּҸ� ����) ����
	LessFunctor lessFunctor;
	// 1. �Լ� ��ü�� 10�� 20 ��
	cout << lessFunctor.operator()(10, 20) << endl;

	// 2. �Լ��� 10 20 ��
	cout << LessFun(10, 20) << endl;

	//3. �Լ� �����ͷ� 10,20 ��

	cout << LessPTR(10, 20) << endl;

	return 0;

}
