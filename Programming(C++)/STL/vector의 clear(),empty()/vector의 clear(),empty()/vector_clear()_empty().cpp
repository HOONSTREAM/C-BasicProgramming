/*vector 멤버함수 clear() 모든원소제거, empty() 컨테이너가 비었는지 검사 예제*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v(5);

	v[0] = 10;
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	v.clear(); //v를 비운다.

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	if (v.empty()) //v가 비었는가?
		cout << "v에 원소가 없습니다." << endl;
	else
		cout << "원소가 아직 존재합니다." << endl;

	return 0;



}