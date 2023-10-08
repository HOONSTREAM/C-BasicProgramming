#include <iostream>
using namespace std;

class Point {

private :

	int xpos, ypos;

public :

	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}

	Point(Point& copy) :xpos(copy.xpos), ypos(copy.ypos) {

		cout << "복사생성자가 호출됨." << endl;

	}

	void ShowPosition() const {

		cout << "[" << xpos << "," << ypos << "]" << endl;

	}

	friend Point operator* (int times, Point& ref);


};

Point operator* (int times, Point& ref) {

	Point pos(ref.xpos * times, ref.ypos * times);

	return pos;

}

int main(void) {


	Point pos(1, 2);
	

	pos * 3;

	pos.ShowPosition();

	return 0;



}