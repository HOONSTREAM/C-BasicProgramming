#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
//adjacent_find() �˰����� ù���Ұ� �������Ұ� �������� ù ������ �ݺ����̴�.
//���� ������ҿ� �������Ұ� ������ ���ٸ� v.end()�� ��ȯ�Ѵ�.

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	auto iter = adjacent_find(v.begin(), v.end());

	if (iter != v.end())
		cout << *iter << endl;
	
	for (; iter != v.end(); ++iter) //iter�� ���� 3��°�� 30�� ����Ű�� �����Ƿ� for�� �� ����

		cout << *iter << " ";
	cout << endl;

	/*���� : ã����� �˰����� ã�� ���Ҹ� �߰����� ���ϸ� ã�� ������ �� �ݺ��ڸ� ��ȯ�մϴ�. �����̳� ��ǥ�� (past-the-end)�ݺ��ڰ� �ƴϴ�.*/





	return 0;

}