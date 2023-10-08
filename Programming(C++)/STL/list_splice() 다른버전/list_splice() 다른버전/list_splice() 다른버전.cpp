/*splice의 다른버전으로, list 컨테이너 전체를 갖다붙이는 것이 아닌, 반복자가 가리키는 원소를
잘라 붙이거나 list의 순차열을 잘라붙이는 예제*/
/*디버깅하기 : 중단점 삽입 후 F5로 시작하여 F10을 누르면서 어느 줄에서 터지는지 탐색.*/
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

	lt2.push_back(100);
	lt2.push_back(200);
	lt2.push_back(300);
	lt2.push_back(400);
	lt2.push_back(500);

	//list<int>::iterator iter1;
	//list<int>::iterator iter2;
	auto iter1 = lt1.begin();
	auto iter2 = lt2.begin();



	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
		cout << *iter2 << " ";
	cout << endl;

     //iter1 = lt1.begin(); -> for문이 끝난 뒤에 iter1은 end를 가리키고 있으므로 begin()을 다시 해준다. 
	 // 그래서 auto를 사용하면 메모리 참조 오류가 발생한다.
	 //iter2 = lt2.begin();
	++iter1;
	++iter1; //30을 가리킴
	++iter2; //200을 가리킴
	
	//iter1이 가리키는 위치에, iter2가 가리키는 위치의 lt2의 원소를 잘라붙임
	lt1.splice(iter1, lt2, iter2);

	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
		cout << *iter2 << " ";
	cout << endl;

	cout << "================================" << endl;

	//lt1.end()가 가리키는 위치에, 순차열[lt2.begin(),lt2.end())를 갖다붙임
	lt1.splice(lt1.end(),lt2,lt2.begin(), lt2.end());


	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
		cout << *iter2 << " ";
	cout << endl;

	return 0;


}
