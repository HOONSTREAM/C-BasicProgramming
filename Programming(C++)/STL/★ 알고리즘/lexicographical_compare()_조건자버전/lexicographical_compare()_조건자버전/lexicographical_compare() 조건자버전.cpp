#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
struct Less {

	bool operator() (const T& left, const T& right) const
	{
		return left < right;
	}

};

int main(void) {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(25);
	v2.push_back(30);

	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), less<int>()))
		cout << "기준 less v1,v2비교 : true, v1 < v2" << endl;
	else
		cout << "기준 less False" << endl;

	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), Less<int>()))
		cout << "사용자 정의 v1,v2 비교 : true" << endl;
	else
		cout << "사용자 정의 v1,v2 비교 : false" << endl;

	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
		cout << "기준 greater v1,v2비교 : true, v1 < v2" << endl;
	else
		cout << "기준 greater False" << endl;



	return 0;

}