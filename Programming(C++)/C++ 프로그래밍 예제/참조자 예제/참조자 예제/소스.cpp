#include <iostream>
using namespace std;

int main(void) {

	int num = 12;
	int* ptr = &num; // num의 주소값을 *ptr에 저장 시킨다. 
	int** dptr = &ptr; // ptr의 주소값을 *(ptr의 주소값->{*dptr}) = num의 주소값에 있는 값을 반환함 = 12

	int& ref = num; //num 의 값에대한 ref 참조자 (별칭)선언 , ref를 불러와도 num값과 동일하게 불러온다.
	int* (&pref) = ptr; // &pref = ptr 이므로 int *ptr 과 동일함 ptr은 &num 
	int** (&dpref) = dptr; // int **dptr 과 동일함.


	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;








	return 0;

}