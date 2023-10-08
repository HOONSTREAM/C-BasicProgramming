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
	v.push_back(50);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	auto iter_end = remove(v.begin(), v.end(), 30);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "remove �� [v.begin(),iter_end) ������ : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "iter_end : " << *(iter_end);


	return 0;


}