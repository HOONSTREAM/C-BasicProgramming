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

	vector<int>::iterator iter = v.begin() + 2;
	vector<int>::iterator iter2;

	iter2 = v.insert(iter, 100);
	//���� ��ġ���� �ڿ��ִ� �����Ҵ� �ڷ� �з�����.


	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "iter2 : " << *iter2 << endl;

	return 0;
}