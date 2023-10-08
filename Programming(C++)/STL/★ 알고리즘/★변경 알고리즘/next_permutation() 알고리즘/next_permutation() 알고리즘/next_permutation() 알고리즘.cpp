// 변경알고리즘 : 순차열 원소의 '순서'를 변경하는 알고리즘
// next_permutation : 구간 [b,e)의 순차열을 다음 순열(사전순)의 순차열이 되게한다. 마지막 순열이면 false를 반환한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30 };

	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end()) << endl;


	return 0;

}
