#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
struct Greater {

	bool operator() (const T& left, const T& right)const {

		return left > right;
	}
};


int main(void) {

	vector<int> v1;

	v1.push_back(80);
	v1.push_back(60);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(10);

	vector<int> v2;

	v2.push_back(70);
	v2.push_back(40);
	v2.push_back(20);

	vector<int> v3(10); //size 10인 vector 생성

	//STL greater 사용
	//auto iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), greater<int>());

	//사용자 정의 Greater 사용

	auto iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), Greater<int>());

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	cout << "v3 : ";
	for (auto& elem2 : v3)
		cout << elem2 << " ";
	cout << endl;


	return 0;


}