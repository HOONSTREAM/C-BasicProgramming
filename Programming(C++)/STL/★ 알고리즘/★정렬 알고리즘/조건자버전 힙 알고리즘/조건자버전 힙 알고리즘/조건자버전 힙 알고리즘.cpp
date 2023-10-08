#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,60 };

	make_heap(v.begin(), v.end(),greater<int>()); //�θ��尡 ���� ���� heap ���� , �⺻(less)�� �θ� ���� ū �� ����


	cout << "v greater �� ���� : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;


	v.push_back(35);

	push_heap(v.begin(), v.end(), greater<int>());

	cout << "v �� �߰� :";

		for (auto& elem : v)
			cout << elem << " ";
		cout << endl;
		cout << "size : " << v.size() << endl;
		cout << "capacity : " << v.capacity() << endl;

		sort_heap(v.begin(), v.end(), greater<int>()); //�������� ���� , �⺻ (less) �������� ����;


		for (auto& elem : v)
			cout << elem << " ";
		cout << endl;

		return 0;




}