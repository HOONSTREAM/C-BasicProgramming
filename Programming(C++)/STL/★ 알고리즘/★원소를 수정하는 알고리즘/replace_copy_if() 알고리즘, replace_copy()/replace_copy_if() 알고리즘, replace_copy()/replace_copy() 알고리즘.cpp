#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n) {

	return n <= 30;

}

int main(void){

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

   //size 6�� ���� v2,v3 ����
	vector<int> v2(6);
	vector<int> v3(6);

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	cout << "v3 : ";
	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;

	auto iter_end = replace_copy(v1.begin(), v1.end(), v2.begin(), 30, 0);
	// 30�� ���Ҹ� ��� 0���� ��ȯ�Ͽ� [v2.begin(),v2.end()) �������� ����

	iter_end = replace_copy_if(v1.begin(), v1.end(), v3.begin(), Pred, 0);

	//30 ������ ���Ҹ� ��� 0���� ��ȯ�Ͽ� [v3.begin(),v3.end()) �������� ����

	cout << "v1 : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	cout << "v2 : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	cout << "v3 : ";
	for (auto& elem : v3)
		cout << elem << " ";
	cout << endl;

	return 0;



}