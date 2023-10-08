#include <iostream>
#include <cstdlib>
using namespace std;

class Point {

private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);

};

ostream& operator<<(ostream& os, const Point& pos) {

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;

}

typedef Point* POINT_PTR;

class BoundCheckPointArray {

private:
	POINT_PTR* arr; // Point*(* arr); ������ ����� Point ��ü�� �ּҰ��̴�.
	int arrlen;

	BoundCheckPointArray(const BoundCheckPointArray& arr) {}
	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {}

public:
	BoundCheckPointArray(int len) :arrlen(len) {

		arr = new POINT_PTR[len];
	}

	POINT_PTR& operator[] (int idx) {

		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);

		}
		return arr[idx];
	}

	POINT_PTR operator[] (int idx) const {

		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);

		}
		return arr[idx];

	}

	void showData(const BoundCheckPointArray& ref) {

		int len = ref.GetArrlen();

		for (int idx = 0; idx < len; idx++) {

			cout << ref[idx] << endl;

		}
	}

	int GetArrlen() const { return arrlen; }
	~BoundCheckPointArray() { delete[]arr; }


};

int main(void) {

	BoundCheckPointArray arr(3);

	arr[0] = new Point(3, 4); // Point ��ü�� �ּҰ��� ����
	arr[1] = new Point(5, 6);
	arr[2] = new Point(7, 8);

	for (int i = 0; i < arr.GetArrlen(); i++) {

		cout << *arr[i] << " ";

	}

	delete arr[0];
	delete arr[1];
	delete arr[2];

    

	return 0;



}