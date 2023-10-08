#include <iostream>
#include <set>
using namespace std;

/*원소(key)의 삽입위치를 지정할 때 삽입 탐색을 시작할 위치로 삽입위치가 정렬 순서와 맞는다면
바로 삽입되지만 아니라면 로그시간이 걸립니다.*/
int main() {

	set<int> s;
	pair<set<int>::iterator, bool> pr;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);

	pr = s.insert(90); //pr.first 는 90 원소의 이터레이터

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	s.insert(pr.first, 85); // 90원소의 반복자에서 검색 시작 후 삽입.

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}