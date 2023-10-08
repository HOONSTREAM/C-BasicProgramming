#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {

	return 3 < right - left;

}

int main(void) {

	vector<int> v = { 40,46,12,80,10,47,30,55,90,53 };

	cout << "[v 원본] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	sort(v.begin(), v.end(), Pred);


	cout << "[v 정렬] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	if (binary_search(v.begin(), v.end(), 32, Pred)) //!Pred(30,32)&&!Pred(32,30) 이 true 이므로 , 30과 같아 32는 순차열에 있는 원소이다.
		cout << "32 원소가 존재합니다." << endl;
	else
		cout << "32 원소가 존재하지 않습니다." << endl;

	if (binary_search(v.begin(), v.end(), 35, Pred)) //!pred(*p,35)&&!pred(35,*p)를 만족하는 원소가 없다. 35 원소는 존재하지 않는다.
		cout << "35원소가 존재합니다." << endl;
	else
		cout << "35원소가 존재하지 않습니다.";


	return 0;

	
}