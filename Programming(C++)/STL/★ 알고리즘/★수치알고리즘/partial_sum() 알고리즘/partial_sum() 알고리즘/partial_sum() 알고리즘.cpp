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

	partial_sum(v1.begin(), v1.end(), v2.begin(), Plus<int>()); //������Լ��� Plus ����
	

	cout << "����� �Լ��� Plus ���� v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin(), Minus);

	cout << "������Լ� Minus ���� v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin());

	cout << "�⺻ partial_sum v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	partial_sum(v1.begin(), v1.end(), v2.begin(),multiplies<int>()); //STL �Լ� ���


	cout << "STL multiplies<int>() ��� v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;


	return 0;



}