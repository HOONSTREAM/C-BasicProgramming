#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct __point { // ����ü ����

	int xpos;
	int ypos;

}point;

point& PntAdder(const point& p1, const point& p2) { // ���۷����� �Ű��������ϰ�(���޹޴� �μ��� �����ڰ� �Ǵ°���), ��ȯ��(����ü��ȯ) �� ���۷���.
	//point ����ü �ڷ������� PntAdder �Լ��� ��ȯ���� ������ ���� main()�Լ��� ������. (�ӽú��� ��������)
	// �Լ��� ��ȯ���� ���۷����̸� �⺻��(�ӽú�������)���� ��������� �� ��ġ�⶧���� ȿ������ ����

	point* pptr = new point; // �Լ����� ����� ������ ���������� ��ȯ�Ϸ��� �ش纯���� ��� �����ؾ��ϴ°�? (�����Ҵ�)
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr; //pptr �������� ���� ����, (PntAdder�Լ��� ��ȯ��)

}

int main(void) {

	point* pptr1 = new point; //point �ڷ����� ����Ű�� ������ pptr1
	pptr1->xpos = 3; // ����ü �����Ҵ� -> ȭ��ǥ������ (�����Ҵ翡�� ����Ҽ����� / �����Ҵ翡�� ����� �� ����.)
	pptr1->ypos = 30;

	point* pptr2 = new point; //point �ڷ����� ����Ű�� ������ pptr2
	(* pptr2).xpos = 70;
	(* pptr2).ypos = 7; //�̰��� �������� �ؼ��ϱ� ���ؼ� -> (ȭ��ǥ������)�� ����ϰԵ�.

	point&pref = PntAdder(*pptr1, *pptr2); // �����Ҵ��� ������ �Լ��� ������ �Ű������� ���ڷ� ��� �����ؾ��ϴ°�? ������������ ����.
	// ����: ����üŸ�� PntAdder �Լ��� ������ ������� pref ��Ī�� ����. , PntAdder(*pptr1, *pptr2)�� �����ϰ�, pref�� �����ϰ� ���� ����� ����.
	// �Լ��� ������� ����ü�� �ݿ��� �������� �����⶧���� ...



	cout << "[" << PntAdder(*pptr1, *pptr2).xpos << ","<< PntAdder(*pptr1, *pptr2).ypos<<"]" << endl;
	//cout << "[" << pref.xpos << "," << pref.ypos "]" <<endl;�� ������. (��Ī������ �߱⶧����)



	delete pptr1;
	delete pptr2;
	delete& pref;

	return 0;

}

