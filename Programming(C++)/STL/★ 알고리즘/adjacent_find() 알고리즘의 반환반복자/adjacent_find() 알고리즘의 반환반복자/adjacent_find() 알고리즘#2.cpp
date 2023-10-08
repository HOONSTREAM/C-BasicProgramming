#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	vector<int>::iterator iter;
	vector<int>::iterator iter_b = v.begin();
	vector<int>::iterator iter_e = v.begin() + 2;
	//���� [iter_b,iter_e)�� �������� 10,20 �̹Ƿ� ã�� ���Ұ� ���� iter�� ������ ���� iter_e �Դϴ�.

	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e) //ã�¿��Ұ� ������ Ȯ�� <<�´�ǥ��>>
		cout << *iter << endl;

	cout << "===================" << endl;
	if (iter != v.end()) //ã�¿��Ұ� ������ Ȯ�� <<Ʋ��ǥ��>>
		cout << *iter << endl;

	iter_b = v.begin();
	iter_e = v.end();
	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e) 
		cout << *iter << endl;

	cout << "===================" << endl;
	if (iter != v.end())
		cout << *iter << endl;



	return 0;
	
}


