/*multiset의 insert()는 key(원소)가 중복저장 될 수 있기 때문에 set처럼 저장위치와 삽입 성공여부 bool 값을 반환하는 pair객체가 아닌
저장된 위치만을 가리키는 반복자를 반환한다.*/

#include <iostream>
#include <set>
using namespace std;

int main() {

	multiset<int> ms;

	

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);

	multiset<int>::iterator iter = ms.begin();

	cout << " iter의 원소 : " << *iter << endl;

	for (auto& elem : ms)
		cout << elem << " ";
	cout << endl;

	return 0;

}