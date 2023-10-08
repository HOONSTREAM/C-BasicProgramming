/*조건자는 상태가 변경될 수 없으므로 bool 형식을 반환하는 operator() 연산자 함수를 꼭 const 함수로 구현해야 한다.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

template<class T>
struct Less :public binary_function<T, T, bool> {

	bool operator() (const T& left, const T& right)const{

		return left < right;

	}
};
template<class T1>
struct Less_Equal :public binary_function<T1, T1, bool> {

	bool operator() (const T1& left, const T1& right)const {

		return left <= right;

	}
};
int main(void) {

	vector<int> v = { 10,20,30,40,50 }; //push_back() 생략

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << endl;
	cout << endl;


	cout << "20보다 작은 원소의 갯수 :" << count_if(v.begin(), v.end(), bind2nd<Less<int>>(Less<int>(), 20)) << endl;
	cout << endl;
	cout << endl;
	cout << "20보다 작거나같은 원소의 갯수 :" << count_if(v.begin(), v.end(), bind2nd<Less_Equal<int>>(Less_Equal<int>(), 20));
	cout << endl;
	cout << endl;



	return 0;
}