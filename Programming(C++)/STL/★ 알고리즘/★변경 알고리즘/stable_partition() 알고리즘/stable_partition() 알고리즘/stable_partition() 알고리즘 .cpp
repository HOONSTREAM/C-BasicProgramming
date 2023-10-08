//상대적인 순서를 유지한다. 단순 파티션 알고리즘 보다는 성능이 떨어지나 상대적인 순서를 유지해야한다면 사용
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

	auto iter_seperate = stable_partition(v.begin(), v.end(), Pred);

	cout << "40미만의 참 순차열 [begin,iter_seperate : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_seperate; ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "조건에 맞지않는 나머지 거짓 순차열 : ";

	for (vector<int>::iterator iter = iter_seperate; iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;


	return 0;

}