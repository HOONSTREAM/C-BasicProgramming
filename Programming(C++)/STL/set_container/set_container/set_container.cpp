/*���������̳�-����������̳��� set �����̳��� �⺻����*/
#include <iostream>
#include <set>
using namespace std;

int main(void) {

	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	//�ߺ��� ����(key)�� ������ �� ����.
	//������ �ߺ��� ����ؾ��Ѵٸ� multiset�� ����ؾ���.

	s.insert(50);
	s.insert(60);
	s.insert(60);


	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}