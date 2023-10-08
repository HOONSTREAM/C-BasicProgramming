/*vector,deque �� �������ٹݺ���(�迭��������̳�)���� �������ִ� ������ �ٸ��ݺ��ڵ� �����ϰԲ��ϴ� �����Լ� */

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