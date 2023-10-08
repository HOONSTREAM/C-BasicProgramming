#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	vector<int>::iterator iter;
	vector<int>::iterator iter_b = v.begin();
	vector<int>::iterator iter_e = v.begin() + 2;
	//구간 [iter_b,iter_e)의 순차열은 10,20 이므로 찾는 원소가 없어 iter의 구간의 끝인 iter_e 입니다.

	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e) //찾는원소가 없는지 확인 <<맞는표현>>
		cout << *iter << endl;

	cout << "===================" << endl;
	if (iter != v.end()) //찾는원소가 없는지 확인 <<틀린표현>>
		cout << *iter << endl;

	iter_b = v.begin();
	iter_e = v.end();
	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e) 
		cout << *iter << endl;

	cout << "===================" << endl;
	if (iter != v.end())
		cout << *iter << endl;



	return 0;
	
}


