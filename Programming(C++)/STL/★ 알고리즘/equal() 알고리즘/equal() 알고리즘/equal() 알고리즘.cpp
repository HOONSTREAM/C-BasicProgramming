//�� �������� ���Ҹ� ���ϴ� equal() �˰��� ����
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

	//���� [v1.begin(),v1.end()) �� ����[v2.begin(),v2.begin()+3)�� ��

	if (equal(v1.begin(), v1.end(), v2.begin())) //�񱳴��(v1)�� ���̸�ŭ�� ����. 
		cout << "�� �������� �����ϴ�." << endl;
	else
		cout << "�� �������� �ٸ��ϴ�." << endl;


		return 0;

}