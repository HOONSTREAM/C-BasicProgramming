#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;

int main(void) {

	queue<int, list<int>> q;

	q.push(10);
	q.push(20);
	q.push(30);

	while (!q.empty()) {

		cout << q.front() << endl;
		q.pop();
	}

	return 0;

}