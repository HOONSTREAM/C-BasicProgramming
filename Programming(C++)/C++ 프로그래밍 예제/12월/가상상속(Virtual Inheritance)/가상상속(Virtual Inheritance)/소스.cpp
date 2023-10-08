#include <iostream>
using namespace std;

class Base {

public :
	Base() { cout << "Base�� �����ڰ� ȣ���" << endl; }
	void SimpleFunc() { cout << "Base�� SimpleFunc()" << endl;}

};

class MiddleDerivedOne :  public Base {

public :
	MiddleDerivedOne() : Base() { cout << "MiddleDerivedOne �� �����ڰ� ȣ���" << endl; }

	void MiddleFuncOne() {

		SimpleFunc();
		cout << "MiddleFuncOne�� ȣ��Ǿ� SimpleFunc�� ȣ��Ǿ���." << endl;
	}

};

class MiddleDerivedTwo :  public Base {

public :
	MiddleDerivedTwo() :Base() {
		cout << "MiddleDerivedTwo �����ڰ� ȣ��Ǿ���" << endl;
	}

	void MiddleFuncTwo() {

		SimpleFunc();
		cout << "MiddleFuncTwo�� ȣ��Ǿ� SimpleFunc�� ȣ��Ǿ���" << endl;
	}
};

class LastDerived :public MiddleDerivedOne, public MiddleDerivedTwo {

public :
	LastDerived() :MiddleDerivedOne(), MiddleDerivedTwo() {
		cout << "LaseDerived �����ڰ� ȣ���" << endl;

	}

	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc(); // Middle One �� Two�� ���� Base����� �ϳ��� �����Ͽ� ���Ŭ������ ���� ��������� BaseŬ������ ����Լ��� ȣ������ ��ȣ����.
		// ������ ����! (�������� Ȱ���ؾ���)
	}
};

int main(void) {

	cout << "��ü ���� ��" << endl;
	LastDerived ldr;
	cout << "��ü ���� ��" << endl;
	ldr.ComplexFunc();

	return 0;

}