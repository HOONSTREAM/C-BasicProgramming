//���ĵ� ���� �˰���(sorted range algorithm)�� ���ĵ� ���������� �����ϴ� �˰���.
// �Է¼������� �ݵ�� ���ĵǾ� �־����.
// ���Ұ� ������ ���Ҷ� !(a<b) && !(b<a) ������ ����Ѵ�.

//�����˻� �˰��� (binary_search() �˰���)
//binary_search(b,e,x)�� [b,e) ���������� x�� ���� ���Ұ� ������ true�� ��ȯ�ϰ� �׷��������� false�� ��ȯ�Ѵ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {


	vector<int> v = { 10,20,30,40,50 };

	if (binary_search(v.begin(), v.end(), 20))

		cout << "20�� �����մϴ�." << endl;

	else

		cout << "20�� �����ϴ�." << endl;

	return 0;

}