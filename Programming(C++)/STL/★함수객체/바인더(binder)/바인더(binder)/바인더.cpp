/*bind1st : 이항 함수자의 첫번째 인자를 고정하여 단항 함수자로 변환
  bind2nd : 이항 함수자의 두번째 인자를 고정하여 단항 함수자로 변환*/

#include <iostream>
#include <functional>
using namespace std;

int main(void) {

	binder1st<less<int>> binder = bind1st(less<int>(), 10);

	cout << binder(5) << " : " << less<int>()(10, 5) << endl;
	cout << binder(10) << " : " << less<int>()(10, 10) << endl;
	cout << binder(20) << " : " << less<int>()(10, 20) << endl;

	cout << "=========================================" << endl;
	cout << endl;

	cout << bind1st(less<int>(), 10)(5) << " : " << less<int>()(10, 5) << endl;
	cout << bind1st(less<int>(), 10)(10) << " : " << less<int>()(10, 10) << endl;
	cout << bind1st(less<int>(), 10)(20) << " : " << less<int>()(10, 20) << endl;


	cout << "====================================================" << endl;

	// 두번째 인자를 고정 

	binder2nd<less<int>> binders = bind2nd(less<int>(), 10);

	cout << binders(5) << " : " << less<int>()(10, 5) << endl;
	cout << binders(9) << " : " << less<int>()(10, 10) << endl;
	cout << binders(9) << " : " << less<int>()(10, 20) << endl;

	cout << "=========================================" << endl;
	cout << endl;

	cout << bind2nd(less<int>(), 10)(5) << " : " << less<int>()(4, 5) << endl;
	cout << bind2nd(less<int>(), 10)(10) << " : " << less<int>()(20, 10) << endl;
	cout << bind2nd(less<int>(), 10)(20) << " : " << less<int>()(20, 20) << endl;




	return 0;

}