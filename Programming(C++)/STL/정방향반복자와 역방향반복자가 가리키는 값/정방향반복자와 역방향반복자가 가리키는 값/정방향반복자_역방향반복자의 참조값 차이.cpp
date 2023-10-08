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

	vector<int>::iterator normal_iter = v.begin() + 3;
	//40���Ҹ� ����Ű�� ������ �ݺ���
	vector<int>::reverse_iterator reverse_iter(normal_iter);
	//normal_iter�� ������ �ݺ���

	cout << "������ �ݺ����� �� : " << *normal_iter << endl;
	cout << "������ �ݺ����� �� : " << *reverse_iter << endl;

	cout << endl;

	for (vector<int>::iterator iter = v.begin(); iter != normal_iter; ++iter)
		cout << *iter << endl;
	cout << endl;

	for (vector<int>::reverse_iterator riter = reverse_iter; riter != v.rend(); ++riter)
		cout << *riter << endl;


	return 0;

}