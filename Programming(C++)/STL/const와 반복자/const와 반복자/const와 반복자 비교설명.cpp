/*중요한 예제입니다.  
 vector<int> :: iterator iter 기준으로 vector에 const가 정의되면 원소의 이동이 불가능하며, 반복자에 const가 붙으면
 원소의 변경이 불가능해집니다. 양쪽 다 const가 정의되면 이동,변경 둘다 불가능해집니다.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;
	int arr[5] = { 10,20,30,40,50 };


	v.push_back(10);
	v.push_back(20); 
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin();
	int* p = arr;
	cout << *iter << " , " << *p << endl; //iter는 *p처럼 동작한다.

	vector<int>::const_iterator citer = v.begin();
	const int* cp = arr;
	cout << *citer << " , " << *cp << endl; //citer는 cp처럼 동작한다. 

	const vector<int>::iterator iter_const = v.begin();
	int* const p_const = arr;
	cout << *iter_const << " , " << *p_const << endl; // iter_const는 p_const 처럼 동작

	const vector<int>::const_iterator citer_const = v.begin();
	const int* const cp_const = arr; // citer_const는 cp_const처럼 동작
	cout << *citer_const << " , " << *cp_const << endl;

	return 0;

}