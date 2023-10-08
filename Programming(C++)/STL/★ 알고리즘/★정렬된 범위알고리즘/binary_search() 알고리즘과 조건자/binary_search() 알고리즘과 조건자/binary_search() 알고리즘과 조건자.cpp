// ���ĵ� ���� �˰����� ���ĵ� ������������ �����ϹǷ� <���ı��ذ� ������ �����ڸ� �����ؾ� �˰����� �ùٸ��� �����մϴ�.>

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,30,40,50,20 };

	cout << "[v ����] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//�⺻ ���ı��� less ���

	sort(v.begin(), v.end());
	cout << "[v less ����] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//�� ������ less ���� 

	cout << "�� less ã�� : " << binary_search(v.begin(), v.end(), 20, less<int>()) << endl;

	sort(v.begin(), v.end(), greater<int>());

	cout << "[v greater ����] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "�� greater ã�� : " << binary_search(v.begin(), v.end(), 20, greater<int>());

	return 0;




}