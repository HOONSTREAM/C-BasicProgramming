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
	v.push_back(30);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//���� [v.begin(),v.end())���� 30������ ������ ��ȯ�Ѵ�.

	int n = count(v.begin(), v.end(),30);
	cout << "30�� ���� : " << n << endl;

	return 0;

}