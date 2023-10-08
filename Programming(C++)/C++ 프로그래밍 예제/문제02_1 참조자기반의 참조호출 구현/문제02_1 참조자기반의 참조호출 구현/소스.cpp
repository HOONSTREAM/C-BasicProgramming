#include <iostream>
using namespace std;

// 값에의한 호출, 참조에 의한 호출 ( 주소값, 참조자 ) 를 구별해야한다. 
void PlusVal(int &ref) {


	ref = ref + 1;


}

void SwapVal(int& ref2) {

	ref2 = -ref2;

}
int main(void) {

	int val1 = 10;
	PlusVal(val1);

	cout << "val1 : " << val1 << endl;

	int val2 = 5;
	SwapVal(val2);
	cout << "Val2 : " << val2 << endl;


	return 0;

}

