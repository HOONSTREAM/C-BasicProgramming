//순차열에서 원소의 값이 n번 <이상!!> 연속하게 반복되는지 찾기위한 알고리즘 
//조건자 f(*iter,찾는값)이 참인 값이 n개 연속한 첫 원소의 반복자를 반환한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {

	return abs(right - left) <= 5;
	//30과의 차가 5이하인것
}

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(32);
	v.push_back(28);
	v.push_back(33);
	v.push_back(40);
	v.push_back(50);
	
	auto iter = search_n(v.begin(), v.end(), 3, 30, Pred); //30과의 차가 5이하인것이 3개연속 있는것의 첫원소 반복자를 반환

	if (iter != v.end())

		cout << "iter : " << *iter << endl;
	cout << "iter+1 : " << *(iter + 1) << endl;
	cout << "iter-1 : " << *(iter - 1) << endl;

	return 0;


}