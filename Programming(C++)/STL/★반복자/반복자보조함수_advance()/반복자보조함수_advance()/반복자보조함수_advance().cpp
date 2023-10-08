/*vector,deque 의 임의접근반복자(배열기반컨테이너)만이 가지고있는 연산을 다른반복자도 가능하게끔하는 보조함수 */

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30 };
	list<int> lt = { 10,20,30 };

	auto viter = v.begin();
	auto liter = lt.begin();

	cout << "viter :" << *viter << endl;
	cout << "liter : " << *liter << endl;


	//advance(viter, 2);
	viter = viter + 2;
	++liter;
	++liter;


	cout << "viter :" << *viter << endl;
	cout << "liter : " << *liter << endl;

	advance(viter, -2);
	advance(liter, -2);

	cout << "viter :" << *viter << endl;
	cout << "liter : " << *liter << endl;




	return 0;

}