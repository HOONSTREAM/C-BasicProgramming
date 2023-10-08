// includes(b,e,b2,e2) 알고리즘은 [b2,e2)의 원소가 구간 [b,e)의 원소에 포함되면 (부분집합이면) true, 아니면 false 이다.
//조건자버전은 f를 비교에 사용한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2 = { 10,20,40 };
	vector<int> v3 = { 10,20,60 };

	if (includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
		cout << "v2는 v1의 부분집합" << endl;
	else
		cout << "v2는 v1의 부분집합이 아님." << endl;

	if (includes(v1.begin(), v1.end(), v3.begin(), v3.end()))
		cout << "v3는 v1의 부분집합" << endl;
	else
		cout << "v3는 v1의 부분집합이 아님." << endl;

	//정렬기준은 greater로 실행

	sort(v1.begin(), v1.end(), greater<int>());
	cout << "v1 greater로 재정렬 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	sort(v2.begin(), v2.end(), greater<int>());
	cout << "v2 greater로 재정렬 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	/*=======================================================================================*/

	if (includes(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
		cout << "v2는 v1의 부분집합" << endl;
	else
		cout << "v2는 v1의 부분집합이 아님." << endl;


	return 0;

}