// STL�� �������� ���Ҹ� ����,����,����,ó�� �� �������� �˰����̶�� ������Ҹ� �����Ѵ�.
// �ѽ��� �ݺ���([begin,end])�� �ʿ�� �Ѵ�.
#include <iostream>
#include <vector>
#include <algorithm> // find ���
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 20); // [begin,end)���� 20ã��.
	cout << *iter << endl;

	iter = find(v.begin(), v.end(), 100); // [begin,end) ���� 100 ã��
	if (iter == v.end()) // 100�� ������ iter==v.end() ��

		cout << "100�� ����!" << endl;

	return 0;

}