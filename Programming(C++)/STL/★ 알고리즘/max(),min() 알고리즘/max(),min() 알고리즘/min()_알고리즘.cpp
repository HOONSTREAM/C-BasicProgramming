#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point {

private : 
	int x, y;

public :
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	int GetX() const { return x; }
	int GetY() const { return y; }
	void Print() const { cout << x << "," << y << endl;}

};

bool Xcompare(const Point& left, const Point& right)
{
	return left.GetX() < right.GetX();
}

bool Ycompare(const Point& left, const Point& right)
{
	return left.GetY() < right.GetY();


}

int main(void) {

	int a = 10, b = 20;
	int r;

	r = max(a, b);

	cout << "max : " << r << endl;
	r = min(a, b);
	cout << "min : " << r << endl;

	Point p1(5, 8);
	Point p2(3, 9);
	Point p3;

	p3 = max(p1, p2, Xcompare);
	cout << "x Max : "; p3.Print();

	p3 = max(p1, p2, Ycompare);
	cout << "y Max : "; p3.Print();


	return 0;

}