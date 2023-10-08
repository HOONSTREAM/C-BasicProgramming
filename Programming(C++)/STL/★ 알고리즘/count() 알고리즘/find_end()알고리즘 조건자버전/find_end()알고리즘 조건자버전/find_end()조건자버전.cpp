#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find_end() 조건자버전
bool Pred(int left, int right) {

	return left <= right;
}

int main() {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);
	v1.push_back(80);

	vector<int> v2;

	v2.push_back(10);
	v2.push_back(15);
	v2.push_back(25);

	auto iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);

	if (iter != v1.end())
	{
		//일치하는 마지막순차열의 첫 원소 반복자 iter
		//[v2.begin(),v2.end()) 의 순차열이 [v1.begin(),v1.end())의 순차열의 원소보다 모두 크거나 같은 (<=) 순차열 구간을 찾습니다.
		//마지막 순차열은 원소가 10,11,12 인 순차열이므로 iter는 10을 가리키는 반복자가 됩니다.

		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;

		return 0;


	}
}