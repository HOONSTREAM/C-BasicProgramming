//rotate(b,m,e)는 middle-begin 만큼 씩 회전한다.

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

	auto middle = v.begin()+4; //왼쪽으로 4만큼 회전

	rotate(v.begin(), middle, v.end());

	cout << "벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	vector<int> v2(5);

	rotate_copy(v.begin(), middle, v.end(), v2.begin());


	cout << "벡터 v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;



	return 0;
}