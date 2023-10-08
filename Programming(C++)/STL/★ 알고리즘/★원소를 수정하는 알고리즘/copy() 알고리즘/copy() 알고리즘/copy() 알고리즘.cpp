//���������� �ٸ� �������� �����ϰ��� �Ѵٸ� copy() �˰����� ����մϴ�. ���⼭ iter�� ������ �� �ݺ��ڸ� ��ȯ�մϴ�. 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(5);
	cout << "======vector v1�� ���� size,capacity information======" << endl;
	cout << "size : " << v2.size() << endl;
	cout << "capacity : " << v2.capacity() << endl;
	cout << "==========================" << endl;

	cout << "v1  : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;
	cout << "==========================" << endl;

	auto iter = copy(v1.begin(), v1.end(), v2.begin()); //[v1.begin(),v1.end()) �� ��� ���Ҹ� [v2.begin(),iter)�� �������� ����

	cout << "v2�� ������ ���� : " << *(iter - 1) << endl;
	cout << "==========================" << endl;
	cout << "v1  : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	return 0;

}