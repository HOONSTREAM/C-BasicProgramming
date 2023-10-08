#include <iostream>
#include <deque>
using namespace std;

int main(void) {

	deque<int> dq;

	for (deque<int>::size_type i = 0; i < 10; ++i)
		dq.push_back((i + 1) * 10);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;

	return 0;

}