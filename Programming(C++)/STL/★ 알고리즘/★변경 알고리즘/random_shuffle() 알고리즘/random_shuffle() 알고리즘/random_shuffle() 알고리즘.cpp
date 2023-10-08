//순차열의 원소의 순서를 랜덤으로 뒤섞고자 한다면 random_shuffle() 알고리즘을 사용한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	cout << "벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	random_shuffle(v.begin(), v.end());

	cout << "1차 셔플 벡터 v : ";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	random_shuffle(v.begin(), v.end());

	cout << "2차 셔플 벡터 v : ";

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;


}