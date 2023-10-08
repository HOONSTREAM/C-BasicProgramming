/*연관컨테이너-노드기반컨테이너의 set 컨테이너의 기본예제*/
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

	//중복된 원소(key)를 삽입할 수 없음.
	//원소의 중복을 허용해야한다면 multiset을 사용해야함.

	s.insert(50);
	s.insert(60);
	s.insert(60);


	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}