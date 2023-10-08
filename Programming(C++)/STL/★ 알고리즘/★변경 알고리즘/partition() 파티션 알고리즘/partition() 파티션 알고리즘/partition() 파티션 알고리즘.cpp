//순차열의 원소를 특정 조건에 따라 분류하고자 한다면 partition() 알고리즘을 사용한다.
// iter = partition(begin,end,Function) 일때, F(*iter)가 참인 원소는 [begin,iter) 에 저장하고 거짓인 원소는 [iter,end)에 저장한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Pred(int n) {

	return n < 40;

}
int main(void) {

	vector<int> v = { 30,40,50,10,20,60 };

	cout << "벡터 v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	auto iter_seperate = partition(v.begin(), v.end(), Pred);

	cout << "40미만의 참 순차열 [begin,iter_seperate : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_seperate; ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "조건에 맞지않는 나머지 거짓 순차열 : ";

	for (vector<int>::iterator iter = iter_seperate; iter != v.end() ;++iter)
		cout << *iter << " ";
	cout << endl;


	return 0;

}