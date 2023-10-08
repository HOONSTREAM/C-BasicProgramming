#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point {

private :
	int x, y;

public :
	explicit Point(int xx = 0, int yy = 0) :x(xx), y(yy) {}
	int GetX() const { return x; }
	int GetY() const { return y; }
};

ostream& operator<< (ostream& out, const Point& arg) {
	//point 객체 cout 출력을 위한 연산자 오버로딩

	out << "(" << arg.GetX() << "," << arg.GetY() << ")";

	return out;


}
bool Pred(const Point& left, const Point& right) {

	return left.GetY() < right.GetY();

}


int main(void){

	vector<Point> v;

	v.push_back(Point(5, 1));
	v.push_back(Point(7, 2));
	v.push_back(Point(5, 3));

	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(),Pred) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(), Pred) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(), Pred) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(), Pred) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(), Pred) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(), Pred) << endl;
	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
	cout << next_permutation(v.begin(), v.end(), Pred) << endl;




	return 0;

}