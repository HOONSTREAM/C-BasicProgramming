#include <iostream>
using namespace std;
const int num = 12;
 //å�� ������ �ּҰ����� ����, ���� �������� �����Ѱ���.

int main(void) {

	const int* ptr = &num;
    
	const int& num2 = num;
    



	cout << "num2 : " << num2 << endl; //num�� num2�� ���� �ּҿ� ����ȴ�.
	cout << "num1 : " << num << endl;








	return 0;

}