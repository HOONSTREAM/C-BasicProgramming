#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

	//greater ���ı����� key:int , value:string Ÿ���� �����̳� m ����

	map<int, string, greater<int>> m;

	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m.insert(pair<int, string>(7, "seven"));

	auto iter = m.begin();

	for (auto& elem : m)
		cout << "(" << elem.first << "," << elem.second << ")";
	cout << endl;


	cout << m[5] << endl; //key�� ����(��� ���� �ٸ� ���� ������Ű�� ����)�� value�� ��� 

	return 0;

}