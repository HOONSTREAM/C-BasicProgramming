#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

class Rectangle {

private :
	int x;
	int y;
	int RecVolume;
public :
	Rectangle(int Xpos, int Ypos) :x(Xpos), y(Ypos) {

		cout << "Rectangle ������ ȣ��, �ʱ�ȭ�Ϸ�" << endl;
		int Vol;
		Vol = x * y;
		RecVolume = Vol;


	}

	void showRecInfo() {

		cout << "���簢�� ���� : " << RecVolume << endl;
	}
};

class Sqaure : public Rectangle {
	

public :
	Sqaure(int x) :Rectangle(x, x) {

		cout << "���簢�� �ʱ�ȭ,������ ȣ��" << endl;

	}
	
	
};

int main(void) {

	Rectangle rec(3, 4);
	rec.showRecInfo();
	Sqaure sqa(7);
	sqa.showRecInfo();





}
