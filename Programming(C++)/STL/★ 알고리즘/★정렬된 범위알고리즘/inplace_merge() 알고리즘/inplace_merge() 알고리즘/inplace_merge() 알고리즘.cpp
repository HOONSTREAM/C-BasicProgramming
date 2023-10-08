#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50,20,30,60 };

	cout << "[v.begin(),v.begin()+5) �� [v.begin()+5,v.end())�� �� �������� ���ĵ� ������ : " << endl;
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	inplace_merge(v.begin(), v.begin() + 5, v.end()); //�� �������� ���ĵ� �ϳ��� �������� �� �������� ����

	cout << "���� �� v :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;

}