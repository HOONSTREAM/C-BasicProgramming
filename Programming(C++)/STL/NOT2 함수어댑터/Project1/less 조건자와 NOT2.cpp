#include <iostream>
#include <functional> //not2 ���
using namespace std;

int main(void) {

	cout << less<int>()(10, 20) << endl; //�ӽ� less ��ü�� ��
	cout << less<int>()(20, 10) << endl;
	cout << "===================" << endl;
	cout << not2(less<int>())(10, 20) << endl;
	cout << not2(less<int>())(20, 10) << endl;
	cout << endl;

	less<int> l;

	cout << l(10, 20) << endl;
	cout << l(20, 10) << endl;

	cout << not2(l)(10, 20) << endl;
	cout << not2(l)(20, 10) << endl;

	return 0;

}
