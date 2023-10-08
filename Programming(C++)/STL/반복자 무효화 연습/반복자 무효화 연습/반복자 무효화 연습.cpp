#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void) {

	list<int> v;

	v.push_back(1);
	v.push_back(2);
	auto iter = v.begin(); //1를 가리킬 목적 
	
	cout << "리스트의 iter : " << *iter << endl; //현재 가리키고 있는 값 1

	
	v.push_back(3);

	cout << "리스트의 iter : " << *iter << endl; 
	cout << "여전히 1을 가리키고 있다. " << endl;
	//노드가 연결이 되므로 iter는 여전히 1을 가리키고 있다.

	//=======================================================================
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	auto viter = v1.begin();

	cout << "벡터의 viter : " << *viter << endl;
	cout << "capacity : " << v1.capacity() << endl; //capacity가 2이므로 다음 push_back에서 메모리 재할당이 발생함.
	//반복자 무효화가 됨.

	v1.push_back(3);

	

	cout << "viter : " << *viter << endl; // 참조할 수 없음.

	return 0;



}  