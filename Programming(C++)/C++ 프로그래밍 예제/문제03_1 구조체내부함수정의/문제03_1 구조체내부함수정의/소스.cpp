#include <iostream>
using namespace std;

struct point {

	int xpos;
	int ypos;

	void MovePos(int x, int y) {

		xpos = xpos + x;
		ypos = ypos + y;

	}

	void showposition() {
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}

	void AddPoint(const point& pos) {

		xpos = xpos + pos.xpos;
		ypos = ypos + pos.ypos;

	}
};


int main(void) {

	point pos1 = { 12,4 };
	point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.showposition();

	pos1.AddPoint(pos2);
	pos1.showposition();

	return 0;

}