/*일반 함수를 어댑터 적용이 가능하도록 함수객체로 변환하는 함수 포인터 어댑터*/
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <functional>

using namespace std;

bool Pred(int n)
{


	return 30 <= n && n <= 40;
}

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << count_if(v.begin(), v.end(), not1(ptr_fun(Pred))) << endl;


	return 0;

}