//unique() 알고리즘 : 인접 원소를 유일하게 만든다. search_n() -> unique() 알고리즘 활용 방법도 있음.
// 정렬한상태에서 수행하면 모든 원소를 유일하게 만들 수 있으며, 논리적으로만 제거 함. 실제로 제거되지 않음.
// 쓰레기값을 뒤로몰아서 쓰레기값 처리가 용이함. erase() 멤버함수를 통해서.
//동작 방식은 프린트물을 참조한다. 


//while 문은 불충족 할때까지 반복 동작한다.내부 if가 false면 바로 while문으로 되돌아간다. 참이면 진행. while 문이 종료되면 스코프 밖 문장을 실행한다.

/*unique 알고리즘 동작 방식*/

/* template<class Forwarditerator>
Forwarditerator unique (ForwardIterator first, ForwardIterator last) {

if(first=last) return last;
Forwarditerator result = first;

while (++first != last ) {

  if(!(*result==*first))     //result 값과 first 값이 다르면 (혹은 조건자 버전일 경우 조건자 함수가 참이 아니면)
     *(++result)=*first     //result 칸을 먼저 증가 시키고 first 값으로 채운다. 같으면 while문으로 되돌아가서 first 칸만 증가시킨다. 
}
return ++result; while문이 종료되면 result를 증가시키고 종료한다.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,30,40,40,30,50 };

	cout << "벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	auto iter_end = unique(v.begin(), v.end());

	cout << "unique 알고리즘 실행 후 벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	v.erase(iter_end, v.end());

	cout << "erase 멤버함수 사용 후 벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;

}