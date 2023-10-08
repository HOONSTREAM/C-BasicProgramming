// includes(b,e,b2,e2) �˰����� [b2,e2)�� ���Ұ� ���� [b,e)�� ���ҿ� ���ԵǸ� (�κ������̸�) true, �ƴϸ� false �̴�.
//�����ڹ����� f�� �񱳿� ����Ѵ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v1 = { 10,20,30,40,50 };
	vector<int> v2 = { 10,20,40 };
	vector<int> v3 = { 10,20,60 };

	if (includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
		cout << "v2�� v1�� �κ�����" << endl;
	else
		cout << "v2�� v1�� �κ������� �ƴ�." << endl;

	if (includes(v1.begin(), v1.end(), v3.begin(), v3.end()))
		cout << "v3�� v1�� �κ�����" << endl;
	else
		cout << "v3�� v1�� �κ������� �ƴ�." << endl;

	//���ı����� greater�� ����

	sort(v1.begin(), v1.end(), greater<int>());
	cout << "v1 greater�� ������ : ";
	for (auto& elem : v1)
		cout << elem << " ";
	cout << endl;

	sort(v2.begin(), v2.end(), greater<int>());
	cout << "v2 greater�� ������ : ";
	for (auto& elem : v2)
		cout << elem << " ";
	cout << endl;

	/*=======================================================================================*/

	if (includes(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
		cout << "v2�� v1�� �κ�����" << endl;
	else
		cout << "v2�� v1�� �κ������� �ƴ�." << endl;


	return 0;

}