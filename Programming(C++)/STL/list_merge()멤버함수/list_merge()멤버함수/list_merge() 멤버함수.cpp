/*splice는 정렬이아닌, 단순히 반복자 기준으로 이어붙이기이며 merge는 두 list 컨테이너에 있어서
합병하여 정렬한다. (오름(less)/내림(greater)차순)*/
/*디폴트는 less 이며, greater<int>를 인자로 넣으면 내림차순 정렬한다.*/
#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(25);
	lt2.push_back(35);
	lt2.push_back(60);

	auto iter = lt1.begin();
	cout << "lt1 : ";
	for (; iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 :";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt1.merge(lt2);
	//lt2를 lt1으로 합병해서 정렬한다. 기준은 less

	cout << "lt1 : ";
	for (iter=lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 :";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}