#include <iostream>
using namespace std;

class Point {

private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	Point(const Point& copy) : xpos(copy.xpos), ypos(copy.ypos) {

		cout << "복사생성자가 호출됨" << endl;

	}
	void showPosition() const {

		cout << "[" << xpos << "," << ypos << "]" << endl;

	}
	friend bool operator== (const Point& , const Point& );

	friend bool operator!= (const Point&, const Point&);

	friend Point operator- (const Point& pos1, const Point& pos2);

	Point& operator+= (const Point& ref) {

		xpos = xpos + ref.xpos;
		ypos = ypos + ref.ypos;

		return *this; //객체 자신반환, 포인트 클래스를 참조할수 있는 정보를 반환하는 것임.


	}

};

bool operator== (const Point& pos1, const Point& pos2) {

	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos) //&& AND , | OR 
		return true;
	else
		return false;

	

}

bool operator!= (const Point& pos1, const Point& pos2) {

	return !(pos1 == pos2); //오버로딩 된 == 연산자 호출
}

Point operator- (Point& pos1, Point& pos2) {

	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);

	return pos;

}



int main(void) {

	Point pos1(3, 4);
	pos1.showPosition();

	Point pos2(10, 20);
	pos2.showPosition();

	pos1 == pos2;




	


}