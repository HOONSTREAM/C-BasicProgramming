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

		cout << "Rectangle 생성자 호출, 초기화완료" << endl;
		int Vol;
		Vol = x * y;
		RecVolume = Vol;


	}

	void showRecInfo() {

		cout << "직사각형 면적 : " << RecVolume << endl;
	}
};

class Sqaure : public Rectangle {
	

public :
	Sqaure(int x) :Rectangle(x, x) {

		cout << "정사각형 초기화,생성자 호출" << endl;

	}
	
	
};

int main(void) {

	Rectangle rec(3, 4);
	rec.showRecInfo();
	Sqaure sqa(7);
	sqa.showRecInfo();





}
