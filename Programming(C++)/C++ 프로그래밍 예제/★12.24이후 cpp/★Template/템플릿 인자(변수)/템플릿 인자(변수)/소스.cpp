#include<iostream>
using namespace std;

template<class T, int len>
class SimpleArray {

private: 
	T arr[len];

public :
	T& operator[] (int idx) {return arr[idx] }
	SimpleArray<T, len>& operator= (const SimpleArray<T, len>& ref) {
		for (int i = 0; i < len; i++)
			arr[i] = ref.arr[i];
		return *this;
	}
};

int main(void) {

	SimpleArray<int, 5> i5arr1;
	for (int i = 0; i < 5; i++)
		i5arr1[i] = i * 10;

	SimpleArray <double,5> i5arrr1;
	for (int i = 0; i < 5; i++)
		i5arrr1[i] = i * 10.5;

	i5arr1 = i5arrr1;


		
}