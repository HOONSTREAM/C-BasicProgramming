#include <iostream>
using namespace std;

class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	friend ostream& operator<< (ostream& os, const Point& pos);

	void* operator new (size_t size) {  //인자에다가 몇바이트가 필요한지 new에서 계산해서 인자로 전달.

		cout << "operator new : " << size << endl; //new 연산자 기능의 확장(오버로딩)
		void* adr = new char[size];

		return adr;

	} 

	void operator delete (void* adr) {

		cout << "operator delete() " << endl; //delete 기능의 확장 "오버로딩"
		delete[]adr;

	}
};

ostream& operator<<(ostream& os, const Point& pos) { 

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;

}

int main(void) {


	Point* ptr = new Point(3, 4);
	cout << *ptr; //객체를 show 함수 쓰지않고 바로 나타내기 위해 <<연산자를 오버로딩 하였음.
	delete ptr;

	return 0;

}