#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2 = { 20,30,60 };

	vector<int> v3(10); //size 10ÀÎ vector »ý¼º

	auto iter_end = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	cout << "[v3.begin(),iter_end) : ";
	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;

	return 0;

		
}