#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2; // size 0 �� ���� �����̳� ���� 

	copy(v1.begin(), v1.end(), inserter<vector<int>>(v2, v2.begin()));

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;


	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;



	return 0;

}