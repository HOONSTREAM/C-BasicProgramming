/*merge는 합병정렬 멤버함수 이다.*/
#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);

	//합병정렬을 하기위한 컨테이너끼리 정렬방식이 같아야한다. greater(내림차순), 디폴트(less,오름차순)

	lt2.push_back(60);
	lt2.push_back(35);
	lt2.push_back(25);

	auto iter = lt1.begin();

	cout << "lt1 : ";
	for (; iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "=============================" << endl;

	//lt2를 lt1에 합병정렬

	lt1.merge(lt2, greater<int>());

	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}

