#include <iostream>
#include <set>
using namespace std;

int main() {

	multiset<int> ms;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	ms.insert(10);

	auto iter = ms.begin();

	for (auto& elem : ms)
		cout << elem << " ";
	cout << endl;

	cout << "30 ������ ���� : " << ms.count(30) << endl; // 30 ������ ����

	iter = ms.find(30); // 30 ������ �ݺ���
	cout << "iter : " << *iter << endl;

	auto lower_iter = ms.lower_bound(30); // 30 ������ ������ �ݺ���
	auto upper_iter = ms.upper_bound(30); // 30 ������ ���� �ݺ���

	cout << "lower_iter : " << *lower_iter << endl;
	cout << "upper_iter : " << *upper_iter << endl;

	cout << "���� [lower_iter, upper_iter) �� ������ : ";
	
	for (iter = lower_iter; iter != upper_iter; ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;




}