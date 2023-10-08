//순차열인 힙을 정렬하는 알고리즘. (힙정렬 사용)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,60 };

	make_heap(v.begin(), v.end());

	cout << "v 힙 생성 : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	sort_heap(v.begin(), v.end());



	cout << "v 힙 생성 : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;

}