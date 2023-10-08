//pop_heap() 알고리즘은 힙에서 루트(가장 큰 원소)노드를 제거 합니다. (논리제거)

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


	pop_heap(v.begin(), v.end());

	cout << "v [힙 삭제,pop_heap] 연산 수행 :";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;

	auto iter = v.end() - 1;

	v.erase(iter);

	cout << "최종 제거 연산 완료 : ";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;


	return 0;


}