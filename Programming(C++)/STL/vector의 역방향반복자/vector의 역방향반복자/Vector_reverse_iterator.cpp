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

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter<<" ";
	cout << endl;

	//STL ��� �����̳ʴ� �ݺ��� ����� reverse_iterator�� typedef Ÿ������ �����ϸ�
	//rbegin(), rend() �� �����̳��� ������ �ݺ��ڸ� ��ȯ

	vector<int>::reverse_iterator riter(v.rbegin());

	for (riter; riter != v.rend(); ++riter)
		cout << *riter<<" ";
	cout << endl;

	return 0;

}