//순차열을 특정 값으로 채우고자 한다면 fill(), fill_n() 알고리즘을 사용합니다. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	fill(v.begin(), v.end(), 0); // 구간[v.begin(),v.end()) 을 0으로 모두 채움

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	fill_n(v.begin(), 3, 55); // [v.begin(),v.begin()+3)의 구간을 55로 채움
	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;


}