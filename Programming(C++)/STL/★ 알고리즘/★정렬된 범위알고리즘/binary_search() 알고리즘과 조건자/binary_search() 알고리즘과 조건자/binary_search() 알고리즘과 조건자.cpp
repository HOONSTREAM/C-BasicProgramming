// 정렬된 범위 알고리즘은 정렬된 순차열에서만 동작하므로 <정렬기준과 동일한 조건자를 지정해야 알고리즘이 올바르게 동작합니다.>

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,30,40,50,20 };

	cout << "[v 원본] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//기본 정렬기준 less 사용

	sort(v.begin(), v.end());
	cout << "[v less 정렬] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//비교 조건자 less 지정 

	cout << "비교 less 찾기 : " << binary_search(v.begin(), v.end(), 20, less<int>()) << endl;

	sort(v.begin(), v.end(), greater<int>());

	cout << "[v greater 정렬] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "비교 greater 찾기 : " << binary_search(v.begin(), v.end(), 20, greater<int>());

	return 0;




}