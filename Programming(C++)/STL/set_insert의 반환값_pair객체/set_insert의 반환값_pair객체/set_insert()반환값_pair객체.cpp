#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;
	//pair Ŭ������ �� ��ü�� �ϳ��� �����ش�.
	pair<set<int>::iterator, bool> pr;

	pr = s.insert(50);
	s.insert(40);
	s.insert(80);

	if (true == pr.second)
		cout << *pr.first << "���� ����" << endl;
	else
		cout << *pr.first << "���� ����" << endl;

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	pr = s.insert(50);

	if (true == pr.second)
		cout << *pr.first << "���� ����" << endl;
	else
		cout << *pr.first << "���� ����" << endl;

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;





}