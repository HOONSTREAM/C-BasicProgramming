#include <iostream>
using namespace std;

class point {

private:
	int x; // x좌표의 범위는 0이상 100이하 (자연수)
 	int y;


};

class Rectangle {

public :
	point upleft;
	point lowRight;

public:
	void showRecInfo() {

		cout << "좌 상단 : " << "[" << upleft.x << ",";
		cout << upleft.y << "]" << endl;
		cout << "우 하단 : " << "[" << lowRight.x << ",";
		cout << lowRight.y << "]" << endl << endl;

	}
};

int main(void) {

	point pos1 = { -2,4 };
	point pos2 = { 5,9 };
	Rectangle rec = { pos2,pos1 };
	rec.showRecInfo();

	return 0;

}
