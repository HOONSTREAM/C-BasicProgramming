//순차열에서 원소의 값이 n번 <이상!!> 연속하게 반복되는지 찾기위한 알고리즘 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {


	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	auto iter = search_n(v.begin(), v.end(), 5, 30);

	if (iter != v.end())
		cout << "iter : " << *iter << endl;
	cout << "iter-1 : " << *(iter - 1) << endl;
	cout << "iter +1 : "<< * (iter + 1) << endl;

	return 0;



}