#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "v :";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout));
	cout << endl;

	cout << "v :";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	list<int> lt = { 100,200,300 };

	cout << "lt+v : ";
	transform(lt.begin(), lt.end(), v.begin(), ostream_iterator<int>(cout, " "), plus<int>());
	cout << endl;







	return 0;

}