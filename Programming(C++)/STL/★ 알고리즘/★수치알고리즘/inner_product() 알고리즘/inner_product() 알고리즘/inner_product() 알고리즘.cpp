#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

template<class T>
struct Plus {
	T operator ()(const T& left, const T& right) {

		return left + right;

	}
};

int Minus(int left, int right) {

	return left - right;

}
int main(void) {

	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = { 2,2,2,2,2 };

	// 0 + 1*2 + 2*2 + ... + 5*2 
	
	cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0) << endl;

	cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0, Plus<int>(), plus<int>()) << endl;


	cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0, Plus<int>(), Minus);


}