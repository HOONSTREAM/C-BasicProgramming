/*deque�� ���ʿ� ���Ҹ� �߰�/���� �� �� �����Ƿ� push_front() ����Լ��� pop_front() ����Լ��� �����Ѵ�.*/
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
	cout << "push_front(100),(200) ����" << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;
	dq.pop_front();
	cout << "pop_front() ����" << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;

	
	dq.pop_back();
	cout << "pop_back() ����" << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;


	return 0;


}