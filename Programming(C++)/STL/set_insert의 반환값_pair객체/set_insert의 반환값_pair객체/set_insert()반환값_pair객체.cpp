#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;
	//pair 클래스는 두 객체를 하나로 묶어준다.
	pair<set<int>::iterator, bool> pr;

	pr = s.insert(50);
	s.insert(40);
	s.insert(80);

	if (true == pr.second)
		cout << *pr.first << "삽입 성공" << endl;
	else
		cout << *pr.first << "삽입 실패" << endl;

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	pr = s.insert(50);

	if (true == pr.second)
		cout << *pr.first << "삽입 성공" << endl;
	else
		cout << *pr.first << "삽입 실패" << endl;

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;





}