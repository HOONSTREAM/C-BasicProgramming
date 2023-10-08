/*list 컨테이너는 sort() 알고리즘을 사용할 수 없다. (대부분 quick sort로 구현되어서)
임의접근반복자를 지원하는 컨테이너(vector,deque)만 사용할 수 있으며 list는 자체적인 
sort () 멤버함수를 지원한다.*/

#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> lt;

	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);

	auto iter = lt.begin();

	for (; iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(); // 오름차순 (less) 정렬

	for (iter=lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}