#include <iostream>
using namespace std;

template <typename T>
class Point {

private :
	T xpos, ypos;

public :
	Point(T x = 0, T y = 0) :xpos(x), ypos(y) {}

	void ShowPosition()const {

		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

int main(void) {

	Point<int>pos(3, 4);
	pos.ShowPosition();

	Point<double>pos1(3.1, 1.7);
	pos1.ShowPosition();

	Point<char>pos2('p', 'f');
	pos2.ShowPosition();

	return 0;

}