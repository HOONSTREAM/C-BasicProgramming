#include <iostream>
using namespace std;

class Point {

private :
	int xpos, ypos;
public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {

		cout << " point 按眉 积己 " << endl;
	}
	~Point() { cout << "Point 按眉 家戈" << endl; }

	void SetPos(int x, int y) {

		xpos = x;
		ypos = y;
	}

	friend ostream& operator<< (ostream& os, const Point& pos);
};
ostream& operator<< (ostream& os, const Point& pos) {

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;
}

template<class T>
class SmartPTR {

private:
	T* posptr;
public :
	SmartPTR(T* ptr) : posptr(ptr) {}

	T& operator*() const {

		return *posptr;
	}

	T* operator->() const {

		return posptr;
	}
	~SmartPTR() {
		delete posptr;

	}
};

int main(void) {

	SmartPTR<Point> sptr1(new Point(1, 2));

	cout << *sptr1;

	sptr1->SetPos(10, 20);

	cout << *sptr1;

	return 0;


}