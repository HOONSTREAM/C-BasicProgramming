//순차열을 역순으로 뒤집는 reverse() 알고리즘

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

	reverse(v.begin(), v.end());

	cout << "벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;



}