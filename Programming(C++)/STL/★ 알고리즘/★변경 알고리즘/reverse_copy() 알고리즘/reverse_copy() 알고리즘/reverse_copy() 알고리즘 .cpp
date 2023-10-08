#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//뒤집혀진 순차열을 목적지 순차열로 복사

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	vector<int>v2(5);

	reverse_copy(v1.begin(), v1.end(), v2.begin());

	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	return 0;

}