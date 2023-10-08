#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//�� �������� ���Ͽ� ������ ���� ���� �ٸ� ��ġ�� ã���� �Ѵٸ�, ���Ұ��� ���� �ٸ� ù ������ �ݺ��� ���� ��ȯ�Ѵ�.
//������ ������ !f(*iter,*iter2) �� ���� ù ������ �ݺ��ڸ� ��ȯ�Ѵ�.

bool Pred(int left, int right) {

	return abs(right - left) <= 5;

}

int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(50);

	vector<int> v2;

	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(40);
	v2.push_back(80);

	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;

	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin(),Pred);

	cout << "v1 : " << *iter_pair.first << "," << "v2 : " << *iter_pair.second << endl;

	return 0;


}