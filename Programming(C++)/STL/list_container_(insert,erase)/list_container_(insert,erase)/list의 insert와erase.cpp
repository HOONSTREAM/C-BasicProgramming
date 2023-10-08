/*list의 가장 큰 특징 중 하나는 순차열 중간에 원소를 삽입(insert),제거(erase)하더라도 상수 시간복잡도의 수행성능을 보인다.
또한 노드기반컨테이너의 삽입과 제거동작은 반복자를 무효화시키지 않는다. */

#include<iostream>
#include<list>
using namespace std;

int main(void) {

	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter = lt.begin();
	list<int>::iterator iter2;
	++iter;
	++iter;

	iter2 = lt.erase(iter); //iter 30의 원소를 제거한다.

	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "iter 2 : " << *iter2 << endl;

	iter = iter2;

	iter2 = lt.insert(iter, 300); //iter2(40)이 가리키는 위치에 300을 삽입.
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "iter 2 : " << *iter2 << endl;


	return 0;

	
}