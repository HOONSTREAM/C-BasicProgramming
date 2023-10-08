/*equal_range() 멤버함수는 lower_bound()와 upper_bound()의 반복자 쌍을 pair객체로 반환한다.*/

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
	//반복자 쌍의 pair 객체

	iter_pair = s.equal_range(30);
	cout << *iter_pair.first << endl;
	cout << *iter_pair.second << endl;

	iter_pair = s.equal_range(55);

	if (iter_pair.first != iter_pair.second)
		cout << "55가 s에 있음." << endl;
	else
		cout << "55가 s에 없음." << endl;

	return 0;


}