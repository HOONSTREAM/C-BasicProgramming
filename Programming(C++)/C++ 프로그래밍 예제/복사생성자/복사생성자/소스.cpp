/*��������� ���� �޸𸮰����� ���������ʴ´ٸ� �������翡 ������ ����.
��� �� ����� �����̱� ������ ��ü sim1�� num1,num2�� ����Ű�� �ּҰ��� sim2,sim3�� ���� �Ҵ�޴´�.*/

#include <iostream>
using namespace std;

class Sosimple {

private : 
	int num1;
	int num2;

public :
	Sosimple(int n1, int n2) : num1(n1), num2(n2) {}

	void showData() {

		cout << num1 << endl;
		cout << num2 << endl;

	}
};

int main(void) {

	Sosimple sim1(15, 30);
	Sosimple sim2 = sim1;
	Sosimple sim3(sim2);

	sim1.showData();
	sim2.showData();
	sim3.showData();

	return 0;

}