#include <iostream>
#include <map>
using namespace std;

int main() {

	map<string, int> m;

	m["money"] = 100; //key 5, value 100의 원소를 m에 삽입한다.
	m["name"] = 100;

	auto iter = m.begin();

	for (auto& elem : m)
		cout << elem.first << "," << elem.second << " ";
	cout << endl;

	m["name"] = 104230; //key name의 value를 104230으로 갱신한다.

	for (auto& elem : m)
		cout << elem.first << "," << elem.second << " ";
	cout << endl;


	return 0;

}