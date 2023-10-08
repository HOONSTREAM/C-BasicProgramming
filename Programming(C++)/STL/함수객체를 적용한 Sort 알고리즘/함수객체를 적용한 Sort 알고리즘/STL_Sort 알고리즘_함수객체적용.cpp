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

	sort(v.begin(), v.end(), less<int>()); //�⺻���� ������������, sort(b,e) �� ����.
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) //�������� ����
		cout << *iter << endl;

	return 0;



}