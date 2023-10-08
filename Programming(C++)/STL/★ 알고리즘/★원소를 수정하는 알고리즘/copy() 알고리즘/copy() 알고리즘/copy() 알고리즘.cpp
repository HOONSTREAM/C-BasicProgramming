//순차열에서 다른 순차열로 복사하고자 한다면 copy() 알고리즘을 사용합니다. 여기서 iter는 목적지 끝 반복자를 반환합니다. 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(5);
	cout << "======vector v1에 대한 size,capacity information======" << endl;
	cout << "size : " << v2.size() << endl;
	cout << "capacity : " << v2.capacity() << endl;
	cout << "==========================" << endl;

	cout << "v1  : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;
	cout << "==========================" << endl;

	auto iter = copy(v1.begin(), v1.end(), v2.begin()); //[v1.begin(),v1.end()) 의 모든 원소를 [v2.begin(),iter)의 순차열로 복사

	cout << "v2의 마지막 원소 : " << *(iter - 1) << endl;
	cout << "==========================" << endl;
	cout << "v1  : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	return 0;

}