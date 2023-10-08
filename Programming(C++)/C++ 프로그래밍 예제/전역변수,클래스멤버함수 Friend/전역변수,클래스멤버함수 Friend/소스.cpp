#include <iostream>
using namespace std;

class Point; //Point 클래스가 있음을 선언

class PointOP {

private :
	int opcnt;

public :
	PointOP() :opcnt(0) {}

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);

	~PointOP() {
		cout << "operation Time : " << opcnt << endl;

	}

};

class Point {

private :
	int x;
	int y;

public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) {} //생성자 정의
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void showPointPos(const Point&);


};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) {

	opcnt++;

	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);

}
