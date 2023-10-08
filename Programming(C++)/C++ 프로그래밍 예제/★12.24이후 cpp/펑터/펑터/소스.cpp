#include<iostream>
using namespace std;

class Point {
private :
	
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}

	Point operator+ (const Point& pos) const {

		return Point(xpos + pos.xpos, ypos + pos.ypos); //임시객체 생성과 동시에 반환하고있다. 리턴문에서 임시객체 생성과 반환을 동시에 하는것도 가능하다.
	}

	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;

}

class Adder { // 이 클래스에서는 두개의 숫자 또는 Point 객체에 대한 덧셈결과를 반환하도록 () 연산자가 총 3회 오버로딩 됐다.

public :

	int operator() (const int& n1, const int& n2) {

		return n1 + n2;
	}

	double operator() (const double& e1, const double& e2) {

		return e1 + e2;
	}

	Point operator() (const Point& pos1, const Point& pos2) {

		return pos1 + pos2;
	}
};

int main(void) {

	Adder adder;
	cout << adder(1, 3) << endl; //함수처럼 동작하는 클래스를 가리켜 펑터라고 한다. (함수오브젝트, Function object)
	//객체의 동작방식에 유연함을 제공할 때 주로 사용한다.
	cout << adder(1.5, 3.7) << endl;
	cout << adder(Point(3, 4), Point(7, 9)) << endl;

	return 0;

}
