//������� ������ �����Ѵ�. �ܼ� ��Ƽ�� �˰��� ���ٴ� ������ �������� ������� ������ �����ؾ��Ѵٸ� ���
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Pred(int n) {

	return n < 40;

}
int main(void) {

	vector<int> v = { 30,40,50,10,20,60 };

	cout << "���� v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	auto iter_seperate = stable_partition(v.begin(), v.end(), Pred);

	cout << "40�̸��� �� ������ [begin,iter_seperate : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_seperate; ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "���ǿ� �����ʴ� ������ ���� ������ : ";

	for (vector<int>::iterator iter = iter_seperate; iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;


	return 0;

}