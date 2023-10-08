#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	for (int i = 0; i < 100; ++i)
		v.push_back(rand() % 1000);


	cout << "v1[Á¤·Ä Àü] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	vector<int> v2(20);

	partial_sort_copy(v.begin(), v.end(), v2.begin(), v2.end());

	cout << "v2 [less] : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sort_copy(v.begin(), v.end(), v2.begin(), v2.end(), greater<int>());

	cout << "v2 [greater] : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;



	return 0;

}