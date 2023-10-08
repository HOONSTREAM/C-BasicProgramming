//���� �˰����� �������� ����(�������ҷ� �����) �̸�, �������� size�� ������ ������� �ʴ´�.
// ���� size ������ erase() ����Լ��� �̿��Ѵ�.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Pred(int n) {

	return 30 <= n && n <= 40;

}

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
	cout << endl;
	cout << "remove_if() �˰��� ����" << endl;

	auto iter_end = remove_if(v.begin(), v.end(), Pred);

	cout << endl;

	cout << "[v.begin(),iter_end) ������ : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;


	cout << "remove ��ü ������ �� size : ";
	
	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "size : " << v.size() << endl;



	return 0;

}
