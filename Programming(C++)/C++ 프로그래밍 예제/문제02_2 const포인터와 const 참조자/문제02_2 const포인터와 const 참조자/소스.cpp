#include <iostream>
using namespace std;
const int num = 12;
 //책의 예제는 주소값으로 접근, 나는 값에대해 접근한것임.

int main(void) {

	const int* ptr = &num;
    
	const int& num2 = num;
    



	cout << "num2 : " << num2 << endl; //num과 num2는 같은 주소에 저장된다.
	cout << "num1 : " << num << endl;








	return 0;

}