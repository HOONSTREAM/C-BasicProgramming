#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	cout << "v[읽기가능] : ";
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;


	cout << "v[const_iter 읽기가능] : ";
	for (vector<int>::const_iterator citer = v.begin(); citer != v.end(); ++citer)
		cout << *citer << " ";
	cout << endl;

	auto iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	*iter = 100;
	//*citer = 100; 쓰기불가능 !

	return 0;



}