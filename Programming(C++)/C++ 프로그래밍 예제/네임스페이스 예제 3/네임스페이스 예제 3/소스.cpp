#include <iostream>
using namespace std;

namespace BestComImpl { // �̸� ������ �� �̻� ����� ������ ���� �ִ�. ���� ���� �������� ���ֵȴ�.

	void SimpleFunc(void);

}

namespace BestComImpl {

	void PrettyFunc(void);

}

namespace ProgComImpl {

	void SimpleFunc(void);

}

int main(void) {


	BestComImpl::SimpleFunc();

	return 0;


}

void BestComImpl::SimpleFunc(void){

	cout << "BestCom�� ������ �Լ�" << endl;
	PrettyFunc(); //���� �̸������̹Ƿ� ����ȣ���� �����ϴ�.
	ProgComImpl::SimpleFunc(); //�ٸ� �̸����� , �Լ� ȣ�� ��ġ�� ��� �ǰ�, �̸����� ProgComImpl�� ���ǵ� �Լ� SimpleFunc �� ȣ���ϴ� ������� ���̰� ����.

}


void BestComImpl::PrettyFunc(void) {

	cout << "So Pretty !" << endl;

}

void ProgComImpl::SimpleFunc(void) {

	cout << "ProgCom�� ������ �Լ�" << endl;
}


