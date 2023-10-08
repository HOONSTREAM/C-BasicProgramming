/*반복자가 가리키는 값의 원소를 변경할 일이 없으면, 상수반복자를 사용하여 데이터를 읽기전용으로 안전하게 사용가능.*/
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

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl;
	cout << *citer << endl;

	cout << *++iter << endl;
	cout << *++citer << endl; // 상수반복자도 이동은 가능. 

	*iter = 100;
	//*citer = 100; 상수반복자는 가리키는 원소를 변경할 수 없음.


	cout << *iter << endl;

	return 0;



}