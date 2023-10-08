/*순차열의 모든 원소를 누적하려면 for_each() 나 transform() 알고리즘을 활용할 수 있지만 함수자(펑터)를 사용해야하므로 순차열의 모든원소에 대해서
누적을 구하거나 순서대로 원소에 연산을 적용해야 한다면 수치 알고리즘을 통해 좀 더 간단하게 처리할 수 있음.*/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	int temp1 = accumulate(v.begin(), v.end(), 0); //초깃값 0으로 시작해서 [v.begin(),v.end()) 순차열의 모든원소를 누적
	int temp2 = accumulate(v.begin(), v.end(), 100); // 초깃값 100을 더하여 모든 순차열의 원소를 누적

	cout << "초깃값 0 시작 temp1 : " << temp1 << endl;
	cout << "초깃값 100을 더한 temp2 :" << temp2 << endl;


	return 0;



}