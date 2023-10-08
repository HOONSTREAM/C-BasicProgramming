#include <iostream>

using namespace std;

const int num = 10; // 변수 num을 상수화
const int* ptr1 = &val1; // 포인터 ptr1을 이용하여 val1의 값을 변경할 수 없음
int const* ptr2 = &val2; // 포인터 ptr2가 상수화 됨.
const int* const ptr3 = &val3; // 포인터ptr3가 상수화되었으며 ptr3로 val3의 값을 변경할 수 없음.

