//�������� ������ ������ �������� �ڼ����� �Ѵٸ� random_shuffle() �˰����� ����Ѵ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	cout << "���� v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	random_shuffle(v.begin(), v.end());

	cout << "1�� ���� ���� v : ";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	random_shuffle(v.begin(), v.end());

	cout << "2�� ���� ���� v : ";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;


}