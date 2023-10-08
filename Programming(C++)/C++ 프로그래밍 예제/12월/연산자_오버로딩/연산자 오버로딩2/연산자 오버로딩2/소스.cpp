/*연산자 오버로딩에는 두가지방법이 있다. 멤버함수에 의한 연산자 오버로딩 / 전역함수에 의한 연산자 오버로딩*/
#include <iostream>
using namespace std;

class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	Point(const Point& copy) : xpos(copy.xpos), ypos(copy.ypos) {

		cout << "복사생성자가 호출됨" << endl;

	}
	void showPosition() const {

		cout << "[" << xpos << "," << ypos << "]" << endl;

	}

	friend Point operator+ (const Point& pos1, const Point& pos2);

};

Point operator+ (const Point& pos1, const Point& pos2) {

	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);

	return pos;
}

int main(void) {

	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2;

	pos1.showPosition();
	pos2.showPosition();
	pos3.showPosition();


}