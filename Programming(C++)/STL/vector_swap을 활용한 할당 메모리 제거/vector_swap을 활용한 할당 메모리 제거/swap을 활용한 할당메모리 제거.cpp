/*clear 멤버함수를 사용해도 , capacity는 없어지지 않고 존재한다. 즉 메모리 낭비가 발생한다.
할당된 메모리를 모두 제거하는 데에는 임시객체로 capacity 0의 컨테이너를 생성하여 교환하는 함수를 사용한다.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int>v(5);
	
	cout << "size : " << v.size() <<" "<< "capacity : " << v.capacity() << endl;

	vector<int>().swap(v); //기본생성자로 만든 vector 컨테이너와 v 컨테이너를 swap 한다.


	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;

	return 0;

}