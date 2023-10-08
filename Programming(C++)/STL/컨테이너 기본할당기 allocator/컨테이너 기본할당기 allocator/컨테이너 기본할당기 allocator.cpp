#include <iostream>
#include <vector>
#include <set>
using namespace std;
/* 모든 컨테이너는 템플릿 매개변수에 할당기를 인자로 받으며, 기본할당기는 allocator<T> 이며
컨테이너는 템플릿 매개변수에 디폴트 매개변수값으로 기본 할당기를 지정한다.*/

int main() {

	vector<int, allocator<int>> v; //vector의 두번째 템플릿 매개변수가 할당기를 인자로 받는다.

	v.push_back(10);

	cout << *v.begin() << endl;

	set<int, less<int>, allocator<int>> s; //set의 세번째 템플릿 매개변수가 할당기를 인자로 받는다. 두번째는 정렬기준, 첫번째는 저장객체 타입이다.

	s.insert(10);
	cout << *s.begin() << endl;

	return 0;



}