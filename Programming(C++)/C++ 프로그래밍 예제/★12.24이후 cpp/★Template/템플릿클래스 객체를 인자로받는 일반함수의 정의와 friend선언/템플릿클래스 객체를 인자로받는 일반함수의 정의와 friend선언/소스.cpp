#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
class Point {

private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0);
	friend Point<int> operator+ (const Point<int>&, const Point<int>&); //Point<int>(Ŭ�������ø�)�� ���ڷι޴� �Ϲ��Լ�
	friend ostream& operator<<(ostream& os, const Point& pos);
	void ShowPosition() const;

};

template <class T>
Point<int> operator+ (const Point<int>& pos1, const Point<int>& pos2) {

	return Point<int>(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos); //�ӽð�ü ��ȯ
}

template<class T>
Point<T>::Point(T x, T y) :xpos(x), ypos(y) {}

template<class T>
ostream& operator<<(ostream& os, const Point<int>& pos) {

	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;

	return os;
}

template<class T>
void Point<T>::ShowPosition() const {
	cout << "[" << xpos << "," << ypos << "]" << endl;

}