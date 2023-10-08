#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,20,30,60 };

	cout << "[v.begin(),v.begin()+5) 와 [v.begin()+5,v.end())가 두 구간으로 정렬된 순차열 : " << endl;
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	inplace_merge(v.begin(), v.begin() + 5, v.end()); //두 구간으로 정렬된 하나의 순차열을 한 구간으로 정렬

	cout << "정렬 후 v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;

}