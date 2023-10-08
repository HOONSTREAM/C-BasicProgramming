/*연관컨테이너의 찾기 관련 멤버함수는 key(원소)를 찾을 때 ==연산을 사용하지 않는다. 정렬기준조건자를 이용해서 찾기연산을 수행함.
예를들어 set의 정렬기준이 less라면 less는 < 연산을 수행하므로 비교하는 두 원소가 !(a<b)&&!(b<a) 라면 두 원소는 같다(equivalence) 라고 판단한다.
set 컨테이너의 정렬기준을 반환하는 멤버함수가 key_comp() 이므로 비교하는 두 원소 a,b가 !s.key_comp()(a,b)&&!s.key_comp()(b,a)라면 두 원소는 같다.*/

//즉, 정렬 기준으로 a가 b보다 앞서있지 않고 b도 a보다 앞서있지 않다면, a와 b는 같다고 판단한다.

#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int, less<int>> s;

	cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl;
	cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl;


	return 0;


}