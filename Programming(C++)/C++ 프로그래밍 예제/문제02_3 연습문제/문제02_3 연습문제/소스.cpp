#include <iostream>
using namespace std;


void SwapPointer(int*(& ref1), int*(& ref2)) { //&ref1은 ptr1의 참조자임. 즉 ref1 = ptr1 

	int temp;
	temp = *ref1; //*ptr값 , 즉 num1의 주소값에 저장되어있는값 5
	*ref1 = *ref2; 
	*ref2 = temp;

}

int main(void) {


	int num1 = 15;
	int* ptr1 = &num1;
	int num2 = 103;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2); // 주소값을 스왑하는 것임. 즉 주소값을 인자로 전달함.


	cout << *ptr1 << ' ' <<*ptr2 << endl;

	return 0;


}