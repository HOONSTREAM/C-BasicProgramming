#include <iostream>
using namespace std;

template <class T>

T Add(T num1, T num2) {

	cout << "���ø� �Լ� ȣ��" << endl;

	return num1 + num2;

}

int Add(int num1, int num2) {

	cout << "�Ϲ� int �Լ� ȣ��" << endl;
		
		return num1 + num2;

}

double Add(double num1, double num2) {

	cout << "�Ϲ� double �Լ� ȣ��" << endl;

	return num1 + num2;
}

int main(void) {

	cout << Add(5, 7) << endl;
	cout << Add(3.4, 1.7) << endl;
	cout << Add<int>(5, 7) << endl;
	cout << Add<double>(3.4, 1.7) << endl;

	return 0;

}


