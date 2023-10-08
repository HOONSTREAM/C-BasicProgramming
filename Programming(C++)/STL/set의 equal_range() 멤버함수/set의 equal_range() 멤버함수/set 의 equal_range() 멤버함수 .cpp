/*equal_range() ����Լ��� lower_bound()�� upper_bound()�� �ݺ��� ���� pair��ü�� ��ȯ�Ѵ�.*/

#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	auto iter = s.begin();
	for (auto& elem : s)
		cout << elem << " ";
	cout << endl;

	//for (auto iter = s.begin(); iter != s.end(); ++iter)
		//cout << *iter << " ";
	//cout << endl;


	pair<set<int>::iterator, set<int>::iterator> iter_pair;
	//�ݺ��� ���� pair ��ü

	iter_pair = s.equal_range(30);
	cout << *iter_pair.first << endl;
	cout << *iter_pair.second << endl;

	iter_pair = s.equal_range(55);

	if (iter_pair.first != iter_pair.second)
		cout << "55�� s�� ����." << endl;
	else
		cout << "55�� s�� ����." << endl;

	return 0;


}