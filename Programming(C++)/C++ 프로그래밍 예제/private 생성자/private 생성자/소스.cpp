#include <iostream>
using namespace std;

class AAA
{
private :
	int num;

public:
	AAA() :num(0) {}
	AAA &CreateInitObj(int n) const            // ������ȯ�� ����� ���� ��ȯ�� �ص� ������ �ǳ�, ���ɿ����� ���̰� ����.
	{
		AAA* ptr = new AAA(n);

		return *ptr;

	}

	void Shownum() const { cout << num << endl;}

private :
	AAA(int n):num(n){} // private ������

};

int main(void) {

	AAA base;
	base.Shownum();

	AAA &obj1 = base.CreateInitObj(3); //3������ �� �ִ� �����ڸ� ã�Ƽ� �� �����ڸ� ȣ���ϸ鼭 3�� �����ϰڴ�.
	obj1.Shownum();

}