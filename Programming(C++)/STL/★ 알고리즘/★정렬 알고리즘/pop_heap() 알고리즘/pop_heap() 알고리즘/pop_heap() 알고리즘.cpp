//pop_heap() �˰����� ������ ��Ʈ(���� ū ����)��带 ���� �մϴ�. (������)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,60 };

	make_heap(v.begin(), v.end());

	cout << "v �� ���� : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;


	pop_heap(v.begin(), v.end());

	cout << "v [�� ����,pop_heap] ���� ���� :";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	auto iter = v.end() - 1;

	v.erase(iter);

	cout << "���� ���� ���� �Ϸ� : ";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;


	return 0;


}