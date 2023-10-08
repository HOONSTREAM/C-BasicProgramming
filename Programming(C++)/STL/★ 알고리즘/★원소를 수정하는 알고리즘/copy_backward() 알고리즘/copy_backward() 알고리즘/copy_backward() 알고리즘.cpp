//덮어쓰기로 뒤쪽부터 복사됩니다.

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

	vector<int> v2(10);

	auto iter = copy_backward(v1.begin(), v1.end(), v2.end());
	cout << "v2 첫 원소 : " << *iter << endl; //목적지의 시작반복자를 반환한다.

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	return 0;

}

