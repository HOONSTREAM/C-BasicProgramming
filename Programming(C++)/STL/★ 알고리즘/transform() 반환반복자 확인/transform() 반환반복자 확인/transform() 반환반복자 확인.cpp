//for_each �� transform �˰��� ���̴� ���� ���� ���� (����Ʈ��)
//transform() �˰����� ������ �� �ݺ��ڸ� ��ȯ�Ѵ�.
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

	cout << "[v2.begin(),iter_end) ������ :";

	cout << *v2.begin() << " ~ " << *(iter_end - 1);




	return 0;

}



