//������ ���ʺ��� ����˴ϴ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(10);

	auto iter = copy_backward(v1.begin(), v1.end(), v2.end());
	cout << "v2 ù ���� : " << *iter << endl; //�������� ���۹ݺ��ڸ� ��ȯ�Ѵ�.

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	return 0;

}

