#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int Plus(int left, int right) {

	return left + right;

}
int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;

	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	vector<int> v3(10);

	auto iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus);
	
	cout << "v1 :";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 :";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	cout << "v3 :";
	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;

	cout << "[v3.begin(),iter_end) 의 순차열 :  ";
	for (vector<int>::iterator iter = v3.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;


	return 0;


	


}