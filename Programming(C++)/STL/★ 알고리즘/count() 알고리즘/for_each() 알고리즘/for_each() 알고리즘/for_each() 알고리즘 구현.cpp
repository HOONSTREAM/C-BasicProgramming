/*순차열의 모든 원소에 사용자 동작을 적용하려면 일반적으로 for_each() 알고리즘을 사용합니다. 이 알고리즘은
원소를 수정하지않는 알고리즘과 원소를 수정하는 알고리즘 두 분류에 모두 포함됩니다.
for_each(b,e,f) 는 구간 [b,e)의 반복자가 p라면 f(*p)를 호출합니다. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int n) {

	cout << n << " ";

}

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for_each(v.begin(), v.begin() + 2, Print); //클라이언트
	cout << endl;
	for_each(v.begin(), v.begin() + 4, Print);
	cout << endl;
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	return 0;

}