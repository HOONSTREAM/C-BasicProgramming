/*������ �����ε����� �ΰ�������� �ִ�. ����Լ��� ���� ������ �����ε� / �����Լ��� ���� ������ �����ε�*/
#include <iostream>
using namespace std;

class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	Point(const Point& copy) : xpos(copy.xpos), ypos(copy.ypos) {

		cout << "��������ڰ� ȣ���" << endl;

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