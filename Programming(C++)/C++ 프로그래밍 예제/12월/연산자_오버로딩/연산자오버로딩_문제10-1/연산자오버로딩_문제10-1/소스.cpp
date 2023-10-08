#include <iostream>
using namespace std;

class Point {

private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	Point(const Point& copy) : xpos(copy.xpos), ypos(copy.ypos) {

		cout << "��������ڰ� ȣ���" << endl;

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

		return *this; //��ü �ڽŹ�ȯ, ����Ʈ Ŭ������ �����Ҽ� �ִ� ������ ��ȯ�ϴ� ����.


	}

};

bool operator== (const Point& pos1, const Point& pos2) {

	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos) //&& AND , | OR 
		return true;
	else
		return false;

	

}

bool operator!= (const Point& pos1, const Point& pos2) {

	return !(pos1 == pos2); //�����ε� �� == ������ ȣ��
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