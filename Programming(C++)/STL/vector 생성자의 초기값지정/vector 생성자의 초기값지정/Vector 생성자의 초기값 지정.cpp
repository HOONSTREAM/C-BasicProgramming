#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	
	vector<int> v(5); // �⺻�� 0���� �ʱ�ȭ �� size 5�� �����̳� ����
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	vector<int> v1(5, 0); // ������ 0���� �ʱ�ȭ �� size 5�� �����̳� ����
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;

	vector<int>v2(5, 10); // ������ 10���� �ʱ�ȭ �� size 5�� �����̳� ����
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;


	return 0;


}