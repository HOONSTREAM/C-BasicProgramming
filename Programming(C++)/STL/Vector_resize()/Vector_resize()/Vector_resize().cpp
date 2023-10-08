/*resize() 멤버함수를 이용하여 컨테이너의 size을 변경할 수 있다. size를 키울때 capacity도 늘어나지만,
size를 줄일 때는 capacity가 줄지 않는다.*/
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

	v.resize(10,100); // 기본값 100으로 초기화 된 size가 10인 컨테이너로 확장
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	v.resize(5);
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	return 0;

}