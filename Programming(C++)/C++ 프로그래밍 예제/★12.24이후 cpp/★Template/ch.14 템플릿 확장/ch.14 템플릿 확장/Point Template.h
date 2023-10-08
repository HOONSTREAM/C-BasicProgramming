#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
class Point {

private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0);
	friend ostream& operator<<(ostream& os, const Point& pos);
	void ShowPosition() const;

};

template<class T>
Point<T>::Point(T x, T y) :xpos(x), ypos(y) {}

template<class T>
ostream& operator<<(ostream& os, const Point<T>& pos) {

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;
}

template<class T>
void Point<T>::ShowPosition() const {
	cout << "[" << xpos << "," << ypos << "]" << endl;

}

