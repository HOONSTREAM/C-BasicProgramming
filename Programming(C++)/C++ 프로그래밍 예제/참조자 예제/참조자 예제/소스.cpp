#include <iostream>
using namespace std;

int main(void) {

	int num = 12;
	int* ptr = &num; // num�� �ּҰ��� *ptr�� ���� ��Ų��. 
	int** dptr = &ptr; // ptr�� �ּҰ��� *(ptr�� �ּҰ�->{*dptr}) = num�� �ּҰ��� �ִ� ���� ��ȯ�� = 12

	int& ref = num; //num �� �������� ref ������ (��Ī)���� , ref�� �ҷ��͵� num���� �����ϰ� �ҷ��´�.
	int* (&pref) = ptr; // &pref = ptr �̹Ƿ� int *ptr �� ������ ptr�� &num 
	int** (&dpref) = dptr; // int **dptr �� ������.


	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;








	return 0;

}