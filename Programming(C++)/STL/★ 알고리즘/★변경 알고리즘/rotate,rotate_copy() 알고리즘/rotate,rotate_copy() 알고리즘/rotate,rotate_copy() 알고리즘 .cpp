//rotate(b,m,e)�� middle-begin ��ŭ �� ȸ���Ѵ�.

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

	auto middle = v.begin()+4; //�������� 4��ŭ ȸ��

	rotate(v.begin(), middle, v.end());

	cout << "���� v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	vector<int> v2(5);

	rotate_copy(v.begin(), middle, v.end(), v2.begin());


	cout << "���� v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;



	return 0;
}