#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void) {

	vector<int> v(4, 100); //100으로 초기화 한 size 4인 컨테이너 생성
	deque<int> dq(4, 100); //100으로 초기화 한 size 4인 deque 생성

	v.push_back(200);
	dq.push_back(200);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;

	return 0;

	/*v와 dq의 size와 결과는 같으나, 새로운 원소가 추가되면 v는 메모리 블록을 재할당 하고 이전 원소를 복사 후
	새로운 원소를 추가한다. (성능저하) ->reserve로 capacity를 예약하여 조금이나마 보완 할 수는 있다.
	

	dq는 새로운 메모리 블록을 할당하고 새로운 원소를 추가한다.*/
}