/*���������̳��� �ٽ� ����Լ� find() ����Լ� ����*/
#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	auto iter = s.begin();


	iter = s.find(30);

	if (iter != s.end())
		cout << "s�� 30�� �ֽ��ϴ�." << endl;
	else
		cout << "s�� 30�� �����ϴ�." << endl;

	return 0;



}