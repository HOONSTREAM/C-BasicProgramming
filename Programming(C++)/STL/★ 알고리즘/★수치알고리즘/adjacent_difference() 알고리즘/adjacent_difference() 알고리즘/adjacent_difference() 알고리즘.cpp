/*초기값은 바로 내리고 인접 원소의 차를 계산하여 목적지 순차열에 저장*/
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2(5); //size 5인 vector 생성


	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	adjacent_difference(v1.begin(), v1.end(), v2.begin());

	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	return 0;

}