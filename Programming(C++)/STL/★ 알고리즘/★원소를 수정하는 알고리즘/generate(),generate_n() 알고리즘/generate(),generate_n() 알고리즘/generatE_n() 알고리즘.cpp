//순차열의 모든 원소를 단순한 동작의 값으로 수정하고자 한다면 generate() 알고리즘을 사용합니다.
//generate(b,e,f) 알고리즘은 구간[b,e)의 모든원소를 f()로 채웁니다. 
//generate_n(b,n,f) 알고리즘은 [b,b+n)의 모든원소를 f()로 채웁니다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Integer {

private :
	int data;

public :

	explicit Integer(int d = 0) :data(d) {}
	int operator()(){

		return data++;

	}
};


int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//[v.begin(),v.end())의 원소를 1~5로 채운다.

	generate(v.begin(), v.end(), Integer(1));
	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//[v.begin(),v.end())의 원소를 100~104로 채운다.
	generate(v.begin(), v.end(), Integer(100));

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//[v.begin(),v.begin()+3)의 원소를 1~3으로 채운다.

	generate_n(v.begin(), 3, Integer(1));

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;


}