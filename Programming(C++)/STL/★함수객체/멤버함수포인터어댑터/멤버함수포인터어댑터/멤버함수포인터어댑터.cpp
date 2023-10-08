/*멤버함수를 함수객체로 변환하여 알고리즘이 객체 원소의 멤버함수를 호출할 수 있게 함.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


template<class T>

struct Less : public binary_function<T, T, bool> {

	bool operator() (const T& left, const T& right) {

		return left < right;
	}
};


class Point {

private: int x, y;

public : 
	explicit Point(int _x =0, int _y = 0): x(_x),y(_y){}
	void Print() const { cout << x+5<< " , " << y+5<< endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }

};

int main(void) {

	vector<Point> v;

	v.push_back(Point(1, 1));
	v.push_back(Point(2, 2));
	v.push_back(Point(3, 3));
	v.push_back(Point(4, 4));
	v.push_back(Point(5, 5));

	for_each(v.begin(), v.end(), mem_fun_ref(&Point::Print));

	return 0;

}