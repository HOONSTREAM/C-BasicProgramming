#include <iostream>
#include <cstring>

using namespace std;

class naturalNumber {

private :
	int num; // ������ private�� ����Ǿ��ֱ� ������ ���� Ŭ���� ������ Public init �Լ����� �����ؼ� ���� �Ҵ��Ѵ�.

public :
	
	void Init(int n) {

		num = n;
		cout << "num : " << num << endl;

	} // ���� �Ҵ��ϴµ� ��� ���ǵ� ���⶧���� �ڿ������� �ƴ��� ������ �� ����.
	// �̸� �����ϱ� ����, ������ ����� �� �Լ��� ������ �����ؼ� ������ ���·� ���������� �����ϴ°��� �������� �̴�.


};

int main(void) {

	naturalNumber n;

	n.Init(-2);


	return 0;

}
