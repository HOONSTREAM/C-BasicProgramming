#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

	//greater 정렬기준의 key:int , value:string 타입의 컨테이너 m 생성

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


	cout << m[5] << endl; //key와 매핑(어떠한 값을 다른 값에 대응시키는 과정)된 value를 출력 

	return 0;

}