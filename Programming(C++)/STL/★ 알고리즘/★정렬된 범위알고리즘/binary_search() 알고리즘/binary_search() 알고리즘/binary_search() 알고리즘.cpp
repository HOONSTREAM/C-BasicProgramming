//정렬된 범위 알고리즘(sorted range algorithm)은 정렬된 구간에서만 동작하는 알고리즘.
// 입력순차열이 반드시 정렬되어 있어야함.
// 원소가 같으믈 비교할때 !(a<b) && !(b<a) 연산을 사용한다.

//이진검색 알고리즘 (binary_search() 알고리즘)
//binary_search(b,e,x)는 [b,e) 순차열에서 x와 같은 원소가 있으면 true를 반환하고 그렇지않으면 false를 반환한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {


	vector<int> v = { 10,20,30,40,50 };

	if (binary_search(v.begin(), v.end(), 20))

		cout << "20이 존재합니다." << endl;

	else

		cout << "20이 없습니다." << endl;

	return 0;

}