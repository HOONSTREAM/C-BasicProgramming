#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Accumulation {

private :
	int total;

public :
	explicit Accumulation(int init = 0) :total(init) {}

	void operator() (int& r) {

		total += r;
		r = total;

	}
};

int main(void) {

	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//[v.begin(),v.end()) 모든원소를 초깃값 0부터 시작해 *iter += *(iter-1)을 적용 한다.
	for_each(v.begin(), v.end(), Accumulation(0));

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;

		
}