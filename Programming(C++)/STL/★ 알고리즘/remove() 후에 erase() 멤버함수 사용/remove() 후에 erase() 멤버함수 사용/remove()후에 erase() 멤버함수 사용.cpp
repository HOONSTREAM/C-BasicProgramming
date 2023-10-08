//제거 알고리즘은 논리적으로 제거(다음원소로 덮어쓰기) 이며, 순차열의 size는 실제로 변경되지 않는다.
// 실제 size 변경은 erase() 멤버함수를 이용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << endl;
	cout << endl;

	auto iter_end = remove(v.begin(), v.end(), 30);
	cout << "remove 진행 후 size : " << v.size() << endl;
	cout << endl;

	cout << "remove 진행 후 capacity : " << v.capacity() << endl;
	cout << endl;



	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << endl;

	//구간 [iter_end,v.end()) 의 원소를 실제로 삭제

	v.erase(iter_end, v.end());
	cout << "erase 진행 후 size : " << v.size() << endl;
	cout << endl;
	cout << "erase 진행 후 capacity : " << v.capacity() << endl;
	cout << endl;


	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;
}
