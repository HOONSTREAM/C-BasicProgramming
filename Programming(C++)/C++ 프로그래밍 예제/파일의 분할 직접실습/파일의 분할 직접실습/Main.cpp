//�Լ��� ������ ������Ͽ� �����ϰ�, �Լ��� ���Ǵ� �ҽ����Ͽ� �����Ѵ�.
#include "NameHeader.h"

int main(void) {

	BestComImpl::SimpleFunc(); // ::�� �������� ������(Scope resolution operator) ��� ��. �̸������� �����Ҷ� ����ϴ� ������
	ProgComImpl::SimpleFunc();

	return 0;

}
