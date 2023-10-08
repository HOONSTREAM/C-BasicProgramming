// 순차열의 원소 중 n개의 원소를 선별하고자 한다면 nth_element() 알고리즘을 사용합니다.
// nth_element(b,m,e) 알고리즘은 구간 [b,e)의 원소중 m-b개 만큼 원소를 선별하여 사전순 [b,m)의 순차열에 놓이게 합니다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	for (int i = 0; i < 100; ++i)
		v.push_back(rand() % 1000);

	nth_element(v.begin(), v.begin() + 20, v.end());

	cout << "v[상위 20개] : ";
	for (vector<int>::size_type i = 0; i < 20; ++i)
		cout << v[i] << "";
	cout << endl;

	cout << "v[하위 80개] : ";
	for (vector<int>::size_type i = 20; i < v.size(); ++i)
		cout << v[i] << "";
	cout << endl;

	return 0;

}