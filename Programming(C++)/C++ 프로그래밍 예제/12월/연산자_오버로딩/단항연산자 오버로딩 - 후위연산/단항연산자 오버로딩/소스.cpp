#include <iostream>
using namespace std;

class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	
	void ShowPosition() const {
		cout << "[" << xpos << "," << ypos << "]" << endl;

	}
	
	const Point operator++(int) {

		const Point retobj(xpos, ypos); //const Point retobj (*this);

		xpos += 1;
		ypos += 1;

		return retobj;

	}

	Point& operator++() {

		xpos += 1;
		ypos += 1;

		return *this;

	}

	Point& operator-() {

		xpos = -xpos;
		ypos = -ypos;

		return *this;

	}

	Point& operator~() {

		int temp = xpos;

		xpos = ypos;
		ypos = temp;


		return *this;


	}

	friend Point& operator-- (Point& ref);
	friend const Point operator-- (Point& ref, int);
};

Point& operator-- (Point& ref) {

	ref.xpos -= 1;
	ref.ypos -= 1;

	return ref;

}

const Point operator-- (Point& ref, int) {

	const Point retobj(ref.xpos,ref.ypos);
	ref.xpos -= 1;
	ref.ypos -= 1;

	return retobj; //���纻�� const��ü�� ��ȯ, �� ���ȭ ��Ű�� ����.  (pos--)-- �� ������ ���� ���ؼ���.
	// operator ����Լ��� const ������ �ƴϱ⶧���� const �ӽð�ü�� ������� ȣ���� �Ұ����ϰԵ�. (�����Ͽ���)


}

int main(void) {

	Point pos(1, 2);
	
	~pos;

	pos.ShowPosition();


	Point pos2(3, 4);

	pos2.ShowPosition();
	

	Point pos3 = ~pos2;

	pos3.ShowPosition();

	pos3--;

	pos3.ShowPosition();





	return 0;



}



