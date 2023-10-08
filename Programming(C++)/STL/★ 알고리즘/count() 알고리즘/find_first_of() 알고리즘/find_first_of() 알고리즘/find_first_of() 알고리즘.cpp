//find_first_of() 알고리즘은 두 순차열을 비교하여 같은원소가 하나라도 발견되면
//발견 된 첫 원소의 반복자를 반환합니다.
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


bool Pred(int left, int right) {

	return left > right;

}

int main() {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;

	v2.push_back(40);
	v2.push_back(80);
	v2.push_back(20);

	sort(v2.begin(), v2.end(),less<int>()); //sort 알고리즘 적용하여 내림차순 적용

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	auto iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);

	if (iter != v1.end())
		cout << "find_first_of() 알고리즘 적용으로 가리키는 iter : " << *iter << endl;

	// 순차열 v1에서 v2의 순차열원소 40,80,20 보다 큰 수는 30이 처음이므로 iter는 30원소의 반복자입니다.

	

	return 0;

}