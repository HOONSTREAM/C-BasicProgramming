/*�������,����Լ��� ���Ͽ� static ������ �����ϸ�, �� ��ü�� ������ �ʾƼ� ��ü ���� �������� ȣ���� �����ϴ�.
static ��������� ���ؼ��� �����ڷ� �ʱ�ȭ�ϴ°��� �ƴ� �ʱ�ȭ������ �����Ѵ� , */

#include <iostream>
using namespace std;

class Sosimple {

private: 
	static int simobjcnt; //Sosimple ��ü�� ���ؼ� �����ȴ�.

public :
	Sosimple() {

		simobjcnt++;
		cout << simobjcnt << "��° Sosimple ��ü" << endl;

	}
};
int Sosimple::simobjcnt = 0; // static ��������� ���� �ʱ�ȭ ���

int main(void) {

	Sosimple obj1; //������ ��ü�� simobjcnt�� �޸� �ּҸ� �����ϴ� ���·� ������ �ȴ�.
	Sosimple obj2; 

}