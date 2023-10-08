//find_first_of() �˰����� �� �������� ���Ͽ� �������Ұ� �ϳ��� �߰ߵǸ�
//�߰� �� ù ������ �ݺ��ڸ� ��ȯ�մϴ�.
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


bool Pred(int left, int right) {

	return left > right;

}

int main() {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;

	v2.push_back(40);
	v2.push_back(80);
	v2.push_back(20);

	sort(v2.begin(), v2.end(),less<int>()); //sort �˰��� �����Ͽ� �������� ����

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	auto iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);

	if (iter != v1.end())
		cout << "find_first_of() �˰��� �������� ����Ű�� iter : " << *iter << endl;

	// ������ v1���� v2�� ���������� 40,80,20 ���� ū ���� 30�� ó���̹Ƿ� iter�� 30������ �ݺ����Դϴ�.

	

	return 0;

}