//���� �˰����� �������� ����(�������ҷ� �����) �̸�, �������� size�� ������ ������� �ʴ´�.
// ���� size ������ erase() ����Լ��� �̿��Ѵ�.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << endl;
	cout << endl;

	auto iter_end = remove(v.begin(), v.end(), 30);
	cout << "remove ���� �� size : " << v.size() << endl;
	cout << endl;

	cout << "remove ���� �� capacity : " << v.capacity() << endl;
	cout << endl;



	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << endl;

	//���� [iter_end,v.end()) �� ���Ҹ� ������ ����

	v.erase(iter_end, v.end());
	cout << "erase ���� �� size : " << v.size() << endl;
	cout << endl;
	cout << "erase ���� �� capacity : " << v.capacity() << endl;
	cout << endl;


	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;
}
