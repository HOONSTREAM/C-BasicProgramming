#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n)
{

	return 30 <= n && n <= 50;

}


int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	replace_if(v.begin(), v.end(), Pred,0);

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;


}