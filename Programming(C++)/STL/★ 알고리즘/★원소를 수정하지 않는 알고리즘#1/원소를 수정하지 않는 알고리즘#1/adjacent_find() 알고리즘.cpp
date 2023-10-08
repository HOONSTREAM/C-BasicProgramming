#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
//adjacent_find() 알고리즘은 첫원소가 다음원소가 같아지는 첫 원소의 반복자이다.
//만약 현재원소와 다음원소가 같은게 없다면 v.end()를 반환한다.

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	auto iter = adjacent_find(v.begin(), v.end());

	if (iter != v.end())
		cout << *iter << endl;
	
	for (; iter != v.end(); ++iter) //iter가 현재 3번째의 30을 가리키고 있으므로 for문 앞 생략

		cout << *iter << " ";
	cout << endl;

	/*주의 : 찾기관련 알고리즘은 찾는 원소를 발견하지 못하면 찾는 구간의 끝 반복자를 반환합니다. 컨테이너 끝표시 (past-the-end)반복자가 아니다.*/





	return 0;

}