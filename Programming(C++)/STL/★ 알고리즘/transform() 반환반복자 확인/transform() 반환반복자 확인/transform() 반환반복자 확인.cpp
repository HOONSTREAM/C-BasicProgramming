//for_each 와 transform 알고리즘 차이는 관련 문서 참고 (프린트물)
//transform() 알고리즘은 목적지 끝 반복자를 반환한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Func(int n) {

	return n + 5;

} //transform() 알고리즘은 리턴값을 활용한다.

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v2(10);


	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	auto iter_end = transform(v.begin(), v.end(), v2.begin(), Func);

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	cout << "[v2.begin(),iter_end) 순차열 :";

	cout << *v2.begin() << " ~ " << *(iter_end - 1);




	return 0;

}



