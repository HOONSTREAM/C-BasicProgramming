#include <iostream>
#include <cstdlib>
using namespace std;


class Point {

private :
	int xpos, ypos;
	
public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);
	

};
ostream& operator<<(ostream& os, const Point& pos) {
	
	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;
}




template <class T>
class BoundCheckArray {

private :
	T* arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& copy) {} //배열이므로 복사 제한
	BoundCheckArray& operator= (const BoundCheckArray& ref) {} // 대입 제한

public :
	BoundCheckArray(int len) :arrlen(len) {

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


int main(void) {

	BoundCheckArray<int> iarr(5);
	for (int i = 0; i < 5; i++)
		iarr[i] = (i + 1) * 11;
	for (int i = 0; i < 5; i++)
		cout << iarr[i] << endl;

	BoundCheckArray<Point> oarr(3);
	oarr[0] = Point(3, 4);
	oarr[1] = Point(5, 6);
	oarr[2] = Point(7, 8);

	for (int i = 0; i < oarr.GetArrlen(); i++) {
		cout << oarr[i];
	}

	typedef Point* Point_PTR;

	BoundCheckArray<Point_PTR> parr(3);
	parr[0] = new Point(3, 4);
	parr[1] = new Point(5, 6);
	parr[2] = new Point(7, 8);
	
	for (int i = 0; i < parr.GetArrlen(); i++)
		cout << *parr[i] << endl;

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;




}