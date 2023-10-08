//두 순차열의 원소를 비교하는 equal() 알고리즘 예제
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


	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem1 : v2)
		cout << elem1 << " ";
	cout << endl;

	//구간 [v1.begin(),v1.end()) 와 구간[v2.begin(),v2.begin()+3)을 비교

	if (equal(v1.begin(), v1.end(), v2.begin())) //비교대상(v1)의 길이만큼만 비교함. 
		cout << "두 순차열은 같습니다." << endl;
	else
		cout << "두 순차열이 다릅니다." << endl;


		return 0;

}