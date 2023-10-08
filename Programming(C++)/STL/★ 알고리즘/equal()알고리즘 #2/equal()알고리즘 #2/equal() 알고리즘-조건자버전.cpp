#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {

	return abs(right - left) < 5;

}

int main() {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(21);
	v1.push_back(30);

	vector<int> v2;

	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(33);

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	//���� [v1.begin(),v1.end)�� ����[v2.begin(),v2.begin()+3)�� ��

	if (equal(v1.begin(), v1.end(), v2.begin(), Pred))
		cout << "�� �������� �����ϴ�.";




	return 0;

}