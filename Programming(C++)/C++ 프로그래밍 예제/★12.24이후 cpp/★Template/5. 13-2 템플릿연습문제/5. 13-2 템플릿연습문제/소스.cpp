#include <iostream>
using namespace std;

template <class T>
T sumArray(T arr[], int len) {

	T sum = 0;
	for (int i = 0; i < len; i++)
		sum += arr[i];

	return sum;

}

int main(void) {

	double arr[] = { 3,4,5,6 };

	

	cout << sumArray(arr, 4) << endl;





	return 0;

}