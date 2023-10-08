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

int Minus(int left, int right) {

	return left - right;

}

int main(void) {


	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2(5);

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin(), Plus<int>()); //사용자함수자 Plus 적용
	

	cout << "사용자 함수자 Plus 적용 v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin(), Minus);

	cout << "사용자함수 Minus 적용 v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin());

	cout << "기본 partial_sum v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin(),multiplies<int>()); //STL 함수 사용


	cout << "STL multiplies<int>() 사용 v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;


	return 0;



}