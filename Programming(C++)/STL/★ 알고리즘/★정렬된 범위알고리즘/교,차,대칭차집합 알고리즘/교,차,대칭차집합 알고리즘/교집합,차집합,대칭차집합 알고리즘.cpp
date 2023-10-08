/*대칭차집합 = 둘중 한 집합에는 속하지만 둘 모두에는 속하지 않는 원소 : (합집합) - (교집합) */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2 = { 20,30,60 };
	vector<int> v3(10);

	auto iter_end = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); //교집합 알고리즘

	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;

	iter_end = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); //차집합

	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;

	iter_end = set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); //대칭차집합

	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;


	return 0;

}