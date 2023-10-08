#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	list<int> lt1 = { 1,2,3 };
	list<int> lt2 = { 1,2,3 };

	copy(v.begin(), v.end(), back_inserter<list<int>>(lt1));
	copy(v.begin(), v.end(), front_inserter<list<int>>(lt2));

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "lt1 :";
	for (auto& elem : lt1)
		cout << elem << " ";
	cout << endl;

	cout << "lt2 : ";
	for (auto& elem : lt2)
		cout << elem << " ";
	cout << endl;

	
	return 0;


	
}