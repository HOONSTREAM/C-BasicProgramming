/*deque는 앞쪽에 원소를 추가/제거 할 수 있으므로 push_front() 멤버함수와 pop_front() 멤버함수를 제공한다.*/
#include <iostream>
#include <deque>
using namespace std;

int main(void) {

	deque<int> dq(5, 0);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;

	dq.push_front(100);
	dq.push_front(200);
	cout << "push_front(100),(200) 실행" << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;
	dq.pop_front();
	cout << "pop_front() 실행" << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;

	
	dq.pop_back();
	cout << "pop_back() 실행" << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;


	return 0;


}