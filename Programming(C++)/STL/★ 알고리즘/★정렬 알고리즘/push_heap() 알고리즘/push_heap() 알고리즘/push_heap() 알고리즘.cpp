#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,60 };

	make_heap(v.begin(), v.end());

	cout << "v[�� ����] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	v.push_back(35);

	cout << "v �������� push_back 35 �߰�  : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	push_heap(v.begin(), v.end());

	cout << "v [�� �߰�] ���� ���� : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;




}