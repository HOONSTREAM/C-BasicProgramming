/*[]와 at()멤버함수의 차이는 범위점검을 하느냐,하지않느냐이다. at()은 범위점검을 하므로 속도가 느리지만 안전하다.
[]는 범위점검을 하지않는대신, 속도가빠르며, 메모리 외의 영역을 참조하면 메모리 접근 오류가 발생한다.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	v[0] = 100;
	v[1] = 500;

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	v.at(0) = 1000; // 범위점검 있는 0 index 원소의 참조

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v.at(i) << " ";
	cout << endl;


	return 0;



}