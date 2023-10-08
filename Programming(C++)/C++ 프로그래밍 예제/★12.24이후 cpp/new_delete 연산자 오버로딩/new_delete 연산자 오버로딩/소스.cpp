#include <iostream>
using namespace std;

class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
	friend ostream& operator<< (ostream& os, const Point& pos);

	void* operator new (size_t size) {  //���ڿ��ٰ� �����Ʈ�� �ʿ����� new���� ����ؼ� ���ڷ� ����.

		cout << "operator new : " << size << endl; //new ������ ����� Ȯ��(�����ε�)
		void* adr = new char[size];

		return adr;

	} 

	void operator delete (void* adr) {

		cout << "operator delete() " << endl; //delete ����� Ȯ�� "�����ε�"
		delete[]adr;

	}
};

ostream& operator<<(ostream& os, const Point& pos) { 

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;

}

int main(void) {


	Point* ptr = new Point(3, 4);
	cout << *ptr; //��ü�� show �Լ� �����ʰ� �ٷ� ��Ÿ���� ���� <<�����ڸ� �����ε� �Ͽ���.
	delete ptr;

	return 0;

}