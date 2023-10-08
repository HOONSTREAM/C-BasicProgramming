//하나의 순차열에 여러 순차열이 일치하는지 찾아야한다면 find_end()와 search() 알고리즘을 사용한다.
// find_end()는 마지막 순차열의 첫 원소를 반환하고, search()는 첫 순차열의 첫 원소를 반환한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v1;

	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);


	auto iter = search(v.begin(), v.end(), v1.begin(), v1.end());

	if (iter != v.end())

		cout << "iter : " << *iter << endl;
	cout << "iter-1 : " << *(iter - 1) << endl;
	cout << "iter+1 : " << *(iter + 1) << endl;

	return 0;



}