#include <iostream>
using namespace std;

class Point {

private :
	int xpos,ypos;

public :
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	void ShowPosition()const {

		cout << "[" << xpos << "," << ypos << "]" << endl;
	}

	Point operator+(const Point& ref) // operator+라는 이름의 함수
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);

		return pos;
	}
};

int main(void) {

	Point pos1(3, 4);
	Point pos2(10, 20);

	Point pos3 = pos1.operator+(pos2);
	Point pos4 = pos3 + pos2; // pos3.operator+(pos2); 와 완벽히 동일한 문장이다. 연산자 오버로딩은 일종의 약속이다.
	// 컴파일러가 객체도 기본자료형 변수처럼 사칙연산이 가능하게 하는 것. 컴파일러가 직접 pos3.operator+(pos2)를 pos3+pos2와 동일하게 해석하는것.



	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;

}