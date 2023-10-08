/*lower_bound()는 찾은원소의 시작반복자를 반환하고, upper_bound()는 찾은원소의 다음원소를 가리키는 반복자 이며 그래서 찾은 원소는
구간 [lower_bound(),upper_bound())로 표현할 수 있고 둘이 같다면 찾는 원소가 없다.*/

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

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	
	auto iter_lower = s.lower_bound(30);
	auto iter_upper = s.upper_bound(30);
	
	cout << *iter_lower << endl;
	cout << *iter_upper << endl;

	iter_lower = s.lower_bound(55);
	iter_upper = s.upper_bound(55);

	if (iter_lower != iter_upper)
		cout << "55가 s에 있다." << endl;
	else
		cout << "55가 s에 없습니다." << endl;

	return 0;



}