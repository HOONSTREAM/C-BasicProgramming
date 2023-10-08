#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);

	sort(v.begin(), v.end());

	for (unsigned int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;


	return 0;

}