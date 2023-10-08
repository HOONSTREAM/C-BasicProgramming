/*컨테이너 생성 후에도 assign() 멤버함수를 활용하면 일관적으로 값을 할당 할 수 있다. 모든 시퀀스 컨테이너는
assign() 함수를 제공한다.*/

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	vector<int> v (5, 1); // 초기값 1의 5개 size 컨테이너 생성

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;


	v.assign(7,1);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;

	v.assign(5, 2);
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl; //capacity 가 줄지않는다.


	return 0;

}