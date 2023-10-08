#pragma once
#include <iostream>
#include <cstdlib>

template <class T>
class BoundCheckArray {

private:
	T* arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& copy) {} //�迭�̹Ƿ� ���� ����
	BoundCheckArray& operator= (const BoundCheckArray& ref) {} // ���� ����

public:
	BoundCheckArray(int len=100) :arrlen(len) {

		arr = new T[len];
	}

	T& operator[] (int idx) {

		if (idx < 0 || idx >= arrlen) {

			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	T operator[] (int idx) const {

		if (idx < 0 || idx >= arrlen) {

			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}

	int GetArrlen() const { return arrlen; }
	~BoundCheckArray() { delete[]arr; }

};
