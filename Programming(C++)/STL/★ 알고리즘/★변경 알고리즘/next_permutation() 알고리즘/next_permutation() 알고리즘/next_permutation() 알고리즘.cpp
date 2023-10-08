// ����˰��� : ������ ������ '����'�� �����ϴ� �˰���
// next_permutation : ���� [b,e)�� �������� ���� ����(������)�� �������� �ǰ��Ѵ�. ������ �����̸� false�� ��ȯ�Ѵ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30 };

	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;


	return 0;

}
