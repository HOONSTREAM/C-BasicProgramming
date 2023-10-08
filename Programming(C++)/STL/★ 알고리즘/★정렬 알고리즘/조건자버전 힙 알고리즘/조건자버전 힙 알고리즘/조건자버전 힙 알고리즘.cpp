#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,60 };

	make_heap(v.begin(), v.end(),greater<int>()); //부모노드가 가장 작은 heap 생성 , 기본(less)는 부모가 가장 큰 힙 생성


	cout << "v greater 힙 생성 : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << "size : " << v.size() << endl;
	cout << "capacity : " << v.capacity() << endl;


	v.push_back(35);

	push_heap(v.begin(), v.end(), greater<int>());

	cout << "v 힙 추가 :";

		for (auto& elem : v)
			cout << elem << " ";
		cout << endl;
		cout << "size : " << v.size() << endl;
		cout << "capacity : " << v.capacity() << endl;

		sort_heap(v.begin(), v.end(), greater<int>()); //내림차순 정렬 , 기본 (less) 오름차순 정렬;


		for (auto& elem : v)
			cout << elem << " ";
		cout << endl;

		return 0;




}