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
	v.push_back(50);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	auto iter_end = remove(v.begin(), v.end(), 30);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "remove 후 [v.begin(),iter_end) 순차열 : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "iter_end : " << *(iter_end);


	return 0;


}