//�Լ��� ������ ������Ͽ� �����ϰ�, �Լ��� ���Ǵ� �ҽ����Ͽ� �����Ѵ�.

#include<iostream>
using namespace std;

namespace BestComImpl {

	void SimpleFunc(void);

}

namespace ProgComImpl {

	void SimpleFunc(void);

}

int main(void) {

	BestComImpl::SimpleFunc(); // ::�� �������� ������(Scope resolution operator) ��� ��. �̸������� �����Ҷ� ����ϴ� ������
	ProgComImpl::SimpleFunc();

	return 0;

}

void BestComImpl::SimpleFunc(void) {

	cout << "BestCom�� ������ �Լ�" << endl;

}

void ProgComImpl::SimpleFunc(void) {

	cout << "ProgCom�� ������ �Լ�" << endl;

}
