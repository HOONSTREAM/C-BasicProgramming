// list ����Լ����� ����. merge()�˰���, �պ�����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(80);

	vector<int> v2;

	v2.push_back(20);
	v2.push_back(40);
	v2.push_back(70);

	vector<int> v3(10);

	auto iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	//merge() �˰����� ������ �� �ݺ��ڸ� ��ȯ�Ѵ�.

	cout << " v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << " v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	cout << " v3 : ";
	for (auto& elem2 : v3)
		cout << elem2 << " ";
	cout << endl;

	cout << "v3 �պ� ������ : " << *v3.begin() << "," << *(iter_end - 1);


	return 0;


}