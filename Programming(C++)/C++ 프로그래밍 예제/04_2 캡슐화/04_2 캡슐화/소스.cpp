/*������ ������ ����ؾ� �ϴ� ���:

����ü �Ǵ� Ŭ������ ������ �� (�б� ������ ��� const ���)
�μ��� �����ϴ� �Լ��� �ʿ��� ��
���� �迭�� ���� ������ �����ؾ� �� ��
������ ������ ������� �ʾƾ� �ϴ� ���:

������ �ʿ䰡 ���� �⺻ �ڷ����� ������ �� (������ ���� ���)*/

/* ���� Ŭ������ ��������� ��ü �� �����Ͱ�ü�� ������ ��� Ŭ������ ����� �Ϻκ��� �������� �κ�(�������)�� 
����(����)�ϹǷ� ������(Constructor) �Լ��� ������ �� ����� ������ �����Ͽ� ��������� �ʱ�ȭ�� ���� �ִ�.*/

#include <iostream>
using namespace std;

class SinivalCap {

public:

	void Take() const 
	{
		cout << "�๰���ž˾�" << endl;

	}
};

class SneezeCap {
public:

	void Take()const {
		cout << "��ä�� ���� �˾�" << endl;
	}
};

class SnuffleCap {
public:
	void Take() const {
		cout << "������ ���� �˾�" << endl;

	}
};

class CONTAC600 {

private:
	SinivalCap sin;
	SneezeCap sne;
	SnuffleCap snu;


public:
	void Take() const {

		sin.Take();
		sne.Take();
		snu.Take();

	}

};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& capsule) const { capsule.Take(); }


};

int main(void) {

	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);

	return 0;

}