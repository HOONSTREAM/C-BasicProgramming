//제거 알고리즘은 논리적으로 제거(다음원소로 덮어쓰기) 이며, 순차열의 size는 실제로 변경되지 않는다.
// 실제 size 변경은 erase() 멤버함수를 이용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Pred(int n) {

	return 30 <= n && n <= 40;

}

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;
	cout << endl;
	cout << "remove_if() 알고리즘 진행" << endl;

	auto iter_end = remove_if(v.begin(), v.end(), Pred);

	cout << endl;

	cout << "[v.begin(),iter_end) 순차열 : ";

	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;


	cout << "remove 전체 순차열 및 size : ";
	
	cout << "v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << "size : " << v.size() << endl;



	return 0;

}
