//for_each �� transform �˰��� ���̴� ���� ���� ���� (����Ʈ��)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Func(int n) {

	return n + 5;

} //transform() �˰����� ���ϰ��� Ȱ���Ѵ�.

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

	transform(v.begin(), v.end(), v.begin(), Func);

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;


}
