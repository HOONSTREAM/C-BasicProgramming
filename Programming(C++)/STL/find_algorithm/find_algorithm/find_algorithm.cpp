// STL은 순차열의 원소를 조사,변경,관리,처리 할 목적으로 알고리즘이라는 구성요소를 제공한다.
// 한쌍의 반복자([begin,end])를 필요로 한다.
#include <iostream>
#include <vector>
#include <algorithm> // find 사용
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 20); // [begin,end)에서 20찾기.
	cout << *iter << endl;

	iter = find(v.begin(), v.end(), 100); // [begin,end) 에서 100 찾기
	if (iter == v.end()) // 100이 없으면 iter==v.end() 임

		cout << "100이 없음!" << endl;

	return 0;

}