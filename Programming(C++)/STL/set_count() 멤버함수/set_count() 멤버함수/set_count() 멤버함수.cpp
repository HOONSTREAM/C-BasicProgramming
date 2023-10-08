/*원소의 갯수반환, 실행시간은 로그시간복잡도*/
/*set은 원소 중복이 불가하므로 count 멤버함수의 활용성이 없다.*/
#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(20);

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "원소 50의 갯수 : " << s.count(50) << endl;
	cout << "원소 100의 갯수 : " << s.count(100) << endl;

	return 0;


}