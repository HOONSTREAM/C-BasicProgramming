#include <iostream>

using namespace std;

bool IsPositive(int num) {

	if (num <= 0)
		return false;

	else
		return true;

}

int main(void)
{
	bool isPos;
	int num;
	cout << "숫자를 입력하시오 : " << endl;
	cin >> num;
	 
	isPos = IsPositive(num); // true 일때 1 , False 일때 0을 반환하며 정수형 1,0 (4byte)와는 다른개념임. 참 거짓을 표현하기위한 1byte 데이터이다.

	if (isPos) {
		cout << "Positive Number : " << isPos << endl;
		cout << sizeof(isPos) << endl;

	}
	 else
		cout << "Negative Number" << endl;
	

	return 0;

	}
