/*sort() 알고리즘은 퀵 정렬 을 기반으로 하며 매우 빠른 수행속도를 자랑하는 정렬방법이다. stable_sort()는 머지정렬(합병정렬)을 기반으로 하며 메모리만 넉넉하다면 O(Nlog2N)복잡도를 보장한다.
partial_sort()알고리즘은 힙 정렬을 기반으로 한다.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Greater(int left, int right) {

	return left > right;
}
int main(void) {

	vector<int> v = { 30,50,30,20,40,10,40 };


	cout << "v [정렬 전] :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	stable_sort(v.begin(), v.end());

	cout << "v [정렬 less] :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	stable_sort(v.begin(), v.end(), Greater);

	cout << "v [정렬 사용자 Greater] :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;

}