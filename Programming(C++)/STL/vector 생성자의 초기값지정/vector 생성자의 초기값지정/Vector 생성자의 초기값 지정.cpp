#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	
	vector<int> v(5); // 기본값 0으로 초기화 된 size 5인 컨테이너 생성
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	vector<int> v1(5, 0); // 지정값 0으로 초기화 된 size 5인 컨테이너 생성
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;

	vector<int>v2(5, 10); // 지정값 10으로 초기화 된 size 5인 컨테이너 생성
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;


	return 0;


}