//순차열 하나에 포함하는 다른 순차열이 있는지 찾아야한다면 find_end()와 search() 알고리즘을 사용합니다.
//find_end()는 일치하는 순차열이 여러개라면 마지막 순차열의 첫 원소 반복자를 반환합니다.
//순차열이 하나라면 순차열의 첫 원소의 반복자를 반환합니다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(70);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;

	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);

	auto iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());

	if (iter != v1.end())
	{

		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;

		return 0;



	}
}

