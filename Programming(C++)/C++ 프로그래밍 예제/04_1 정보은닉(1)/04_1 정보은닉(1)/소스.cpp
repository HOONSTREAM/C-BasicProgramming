#include <iostream>
using namespace std;

class point {

private:
	int x; // x��ǥ�� ������ 0�̻� 100���� (�ڿ���)
 	int y;


};

class Rectangle {

public :
	point upleft;
	point lowRight;

public:
	void showRecInfo() {

		cout << "�� ��� : " << "[" << upleft.x << ",";
		cout << upleft.y << "]" << endl;
		cout << "�� �ϴ� : " << "[" << lowRight.x << ",";
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
