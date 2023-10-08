#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int a = 10, b = 20;

	vector<int> v;

	v.push_back(10);
	v.push_back(20);

	cout << "a : " << a << " " << "b : " << b << endl;
	swap(a, b);
	cout << "a : " << a << " " << "b : " << b << endl;

	auto iter = v.begin();
	auto iter2 = v.begin() + 1;

	cout << "v[0] : " << v[0] << " " << "v[1] : " << v[1] << endl;
	iter_swap(iter, iter2);


	cout << "v[0] : " << v[0] << " " << "v[1] : " << v[1] << endl;


	return 0;

}