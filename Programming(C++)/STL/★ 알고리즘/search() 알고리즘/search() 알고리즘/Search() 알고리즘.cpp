//�ϳ��� �������� ���� �������� ��ġ�ϴ��� ã�ƾ��Ѵٸ� find_end()�� search() �˰����� ����Ѵ�.
// find_end()�� ������ �������� ù ���Ҹ� ��ȯ�ϰ�, search()�� ù �������� ù ���Ҹ� ��ȯ�Ѵ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v1;

	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);


	auto iter = search(v.begin(), v.end(), v1.begin(), v1.end());

	if (iter != v.end())

		cout << "iter : " << *iter << endl;
	cout << "iter-1 : " << *(iter - 1) << endl;
	cout << "iter+1 : " << *(iter + 1) << endl;

	return 0;



}