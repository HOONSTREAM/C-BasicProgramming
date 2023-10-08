#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
struct Plus : public binary_function<T,T,T> {

	//typedef T first_argument_type;
	//typedef T second_argument_type;
	//typedef T result_type;

	T operator() (const T& left, const T& right) const {

		return left + right;

	}
};

int main(void) {

	vector<int> v = { 10,20,30 };
	vector<int> v2(3); //size 3인 vector 생성

	//transform(v.begin(), v.end(), v2.begin(), bind1st < plus<int>>(plus<int>(), 100));
	transform(v.begin(), v.end(), v2.begin(), bind1st < Plus<int>>(Plus<int>(), 100)); //사용자 정의 Plus 사용


	cout << "v1 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	return 0;

}