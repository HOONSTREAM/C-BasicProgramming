/*연관컨테이너의 핵심 멤버함수 find() 멤버함수 예제*/
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
		cout << "s에 30이 있습니다." << endl;
	else
		cout << "s에 30이 없습니다." << endl;

	return 0;



}