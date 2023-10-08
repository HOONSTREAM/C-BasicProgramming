#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);

	auto iter = v.begin(); //auto = list<int>::iterator iter

	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	v.remove(10); //10������ ��带 ��� ����

	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}