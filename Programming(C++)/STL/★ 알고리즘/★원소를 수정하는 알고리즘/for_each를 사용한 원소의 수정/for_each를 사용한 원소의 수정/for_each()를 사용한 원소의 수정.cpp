/*for_each(b,e,f)는 구간 [b,e)의 반복자가 p라면 f(*p)를 적용합니다. for_each()알고리즘은 출력매개변수(out parameter)를 사용합니다.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//출력 매개변수로 사용하기 위해서 &(레퍼런스)를 사용하였다.

void Func(int& r) {

	r += 5;

}
int main(void) {


	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	for_each(v.begin(), v.end(), Func);

	cout << "for_each() algorithm 을 적용한 v 벡터 ";

	
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;

}