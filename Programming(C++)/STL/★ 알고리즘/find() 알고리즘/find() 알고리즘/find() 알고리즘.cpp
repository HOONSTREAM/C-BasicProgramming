#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n) {

	return 35 < n;

}

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//���� [v.begin(),v.end()) ���� 35���� ū ������ ������ ��ȯ

	auto iter = find(v.begin(), v.end(), 20);
	if (iter != v.end())
		cout <<*iter<< "�� ã�Ҵ�.!" << endl;

	iter = find_if(v.begin(), v.end(), Pred);
	if (iter != v.end())
		cout << "���������� 35���� ū ù��° ����: " << *iter << endl;

	return 0;



}