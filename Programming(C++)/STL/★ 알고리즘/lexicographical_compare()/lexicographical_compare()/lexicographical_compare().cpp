/*문자열 비교처럼 순차열의 사전순비교(less:<)가 필요하다면 lexicographical_compare() 알고리즘을 사용하며
순차열 [b,e)와 [b2,e2)의 모든 원소를 문자열처럼 비교하여 참과 거짓을 반환한다.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);

	vector<int> v3;
	v3.push_back(10);
	v3.push_back(20);
	v3.push_back(30);

	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end()))
		cout << "v1 < v2" << endl;
	else
		cout << "v1 >= v2" << endl;

	if (lexicographical_compare(v1.begin(), v1.end(), v3.begin(), v3.end()))
		cout << "v1 < v3" << endl;
	else
		cout << "v1 >= v3" << endl;

	return 0;

}