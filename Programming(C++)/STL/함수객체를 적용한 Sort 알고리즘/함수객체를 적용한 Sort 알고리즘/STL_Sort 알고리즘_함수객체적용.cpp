#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);

	sort(v.begin(), v.end(), less<int>()); //기본정렬 오름차순정렬, sort(b,e) 와 같다.
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) //내림차순 정렬
		cout << *iter << endl;

	return 0;



}