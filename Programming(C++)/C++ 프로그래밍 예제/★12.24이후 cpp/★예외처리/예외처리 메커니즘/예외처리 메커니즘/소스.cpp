#include <iostream>
using namespace std;

int main(void) {

	int num1, num2;
	cout << "두개의 숫자 입력 : ";
	cin >> num1 >> num2;

	try { //일반적인 프로그램의 흐름이지만, 예외가 발생할 수 있는 지역

		if (num2 == 0)
			throw num2;
		cout << "나눗셈의 몫 : " << num1 / num2 << endl;
		cout << "나눗셈의 나머지 : " << num1 % num2 << endl;
	}

	catch (int expn) {
		cout << "제수는 0이될 수 없습니다. " << endl;
		cout << "프로그램을 다시 실행하세요.";


	}

	cout << "end of Main" << endl;

	return 0;

}