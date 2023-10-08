#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//두 순차열을 비교하여 원소의 값이 서로 다른 위치를 찾고자 한다면, 원소값이 서로 다른 첫 원소의 반복자 쌍을 반환한다.
//조건자 버전은 !f(*iter,*iter2) 가 참인 첫 원소의 반복자를 반환한다.

bool Pred(int left, int right) {

	return abs(right - left) <= 5;

}

int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(50);

	vector<int> v2;

	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(40);
	v2.push_back(80);

	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;

	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin(),Pred);

	cout << "v1 : " << *iter_pair.first << "," << "v2 : " << *iter_pair.second << endl;

	return 0;


}