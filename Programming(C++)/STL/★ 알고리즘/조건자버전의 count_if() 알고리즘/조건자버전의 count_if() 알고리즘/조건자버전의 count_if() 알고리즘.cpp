#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n) {

	return 25 < n;

}

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

	//구간 [v.begin(),v.end()) 에서 25보다 큰 원소의 갯수를 반환

	int n = count_if(v.begin(), v.end(), Pred);

	cout << "25보다 큰 원소의 갯수 : " << n << endl;

	return 0;



}