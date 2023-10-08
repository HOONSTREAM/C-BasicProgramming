#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void) {

	vector<int> v;
	list<int> lt;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	auto viter = v.begin();
	++viter; // 20À» °¡¸®Å´
	auto liter = lt.begin();
	++liter; //20À» °¡¸®Å´

	viter = v.insert(viter, 100);
	liter = lt.insert(liter, 100);

	cout << "vector : " << *viter << endl;
	cout << "list : " << *liter << endl;

	cout << "vector : ";
	for (viter = v.begin(); viter != v.end(); ++viter)
		cout << *viter << " ";
	cout << endl;

	cout << "list : ";
	for (liter = lt.begin(); liter != lt.end(); ++liter)
		cout << *liter << " ";
	cout << endl;

	return 0;


}