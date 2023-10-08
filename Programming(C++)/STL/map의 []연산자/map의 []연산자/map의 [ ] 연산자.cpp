#include <iostream>
#include <map>
using namespace std;

int main() {

	map<string, int> m;

	m["money"] = 100; //key 5, value 100�� ���Ҹ� m�� �����Ѵ�.
	m["name"] = 100;

	auto iter = m.begin();

	for (auto& elem : m)
		cout << elem.first << "," << elem.second << " ";
	cout << endl;

	m["name"] = 104230; //key name�� value�� 104230���� �����Ѵ�.

	for (auto& elem : m)
		cout << elem.first << "," << elem.second << " ";
	cout << endl;


	return 0;

}