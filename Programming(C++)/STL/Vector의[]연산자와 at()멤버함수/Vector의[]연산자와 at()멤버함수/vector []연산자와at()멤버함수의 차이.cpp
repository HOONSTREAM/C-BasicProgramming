/*[]�� at()����Լ��� ���̴� ���������� �ϴ���,�����ʴ����̴�. at()�� ���������� �ϹǷ� �ӵ��� �������� �����ϴ�.
[]�� ���������� �����ʴ´��, �ӵ���������, �޸� ���� ������ �����ϸ� �޸� ���� ������ �߻��Ѵ�.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	v[0] = 100;
	v[1] = 500;

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	v.at(0) = 1000; // �������� �ִ� 0 index ������ ����

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v.at(i) << " ";
	cout << endl;


	return 0;



}