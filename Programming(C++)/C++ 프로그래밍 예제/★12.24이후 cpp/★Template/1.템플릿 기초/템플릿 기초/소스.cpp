#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2) {

	return num1+num2;

}

int main(void) {

	cout << Add<int>(3, 6) << endl;
	cout << Add<double>(3.4, 1.7) << endl;

	return 0;


}