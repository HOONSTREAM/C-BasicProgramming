#include <iostream>
#include <functional>
using namespace std;

int main(void) {

	less<int> oLess;
	binary_negate<less<int>> negate = not2(less<int>());

	cout << negate(10, 15) << " : " << not2(oLess)(10, 15) << " : " << not2(less<int>())(10, 15) << endl;


	binder2nd<less<int>> binder = bind2nd(less<int>(), 10); //2번째 인자를 10으로 고정
	unary_negate<binder2nd<less<int>>> negates = not1(binder);

	cout << negates(5) << " : " << not1(binder)(5) << not1(bind2nd(less<int>(), 10)(5));
	return 0;

}