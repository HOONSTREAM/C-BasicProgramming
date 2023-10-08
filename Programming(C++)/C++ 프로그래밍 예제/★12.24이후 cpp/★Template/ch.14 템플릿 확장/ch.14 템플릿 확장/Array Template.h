#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;


template <class T>
class BoundCheckArray {

private:
	T* arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& copy) {} //배열이므로 복사 제한
	BoundCheckArray& operator= (const BoundCheckArray& ref) {} // 대입 제한

public:
	BoundCheckArray(int len);
	T& operator[] (int idx);
	T operator[] (int idx) const;
	int GetArrlen() const;
	~BoundCheckArray();

};

template<class T>
BoundCheckArray<T>::BoundCheckArray(int len):arrlen(len) {

	arr = new T[len];
}

template<class T>
T& BoundCheckArray<T>::operator[](int idx) {

		if (idx < 0 || idx >= arrlen) {

			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
}

template<class T>
T BoundCheckArray<T>::operator[] (int idx) const {

	if (idx < 0 || idx >= arrlen) {

		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}

template<class T>
int BoundCheckArray<T>::GetArrlen() const { return arrlen; }

template<class T>
BoundCheckArray<T>::~BoundCheckArray() { delete[]arr; }
