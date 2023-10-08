#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,60 };

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	make_heap(v.begin(), v.end());


	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;



	return 0;

}