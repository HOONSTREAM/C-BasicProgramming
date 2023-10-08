/*순차열의 모든 원소를 누적하려면 for_each() 나 transform() 알고리즘을 활용할 수 있지만 함수자(펑터)를 사용해야하므로 순차열의 모든원소에 대해서
누적을 구하거나 순서대로 원소에 연산을 적용해야 한다면 수치 알고리즘을 통해 좀 더 간단하게 처리할 수 있음.*/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


template<class T>
struct Plus {

	T operator() (const T& left, const T& right) {

		return left + right;

	}
};
int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//사용자 함수자 합 연산

	cout << accumulate(v.begin(), v.end(), 0, Plus<int>()) << endl;
	//템플릿 multiplies 곱 연산
	cout << accumulate(v.begin(), v.end(), 1, multiplies<int>());









	return 0;

}