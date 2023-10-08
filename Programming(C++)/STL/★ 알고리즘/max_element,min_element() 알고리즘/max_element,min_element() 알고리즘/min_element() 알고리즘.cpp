#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);

	auto iter = max_element(v.begin(), v.end());
	cout << *iter << endl;

	auto iter2 = min_element(v.begin(), v.end());

	cout << *iter2 << endl;

	return 0;


}