#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;
	vector<int>::iterator iter2;
	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;
	cout << endl;

	iter = v.begin() + 2; //30을 가리키는중
	iter2 = v.erase(iter); //iter2가 가리키는위치는 erase멤버함수 실행됨으로써 40이 된다.
	cout << "iter2 = " << *iter2 << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;


	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	iter2 = v.erase(v.begin() + 1, v.end()); //구간원소 제거

	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;

	return 0;



}

