#include <iostream>
using namespace std;

class Point {

private: 
	int xpos;
	int ypos;

public:
	Point(int x, int y) : xpos(x),ypos(y){}

	void ShowPointInfo() const {

		cout << "[" << xpos << "," << ypos << "]" << endl;

	}

};

class Circle { //함수에 대입되는 변수 내에 클래스를 참조로 정의해서 함수를 불러올수도 있고. (단 , 그 함수에서만 클래스에 관한 함수를 사용할수있음)
			   // 클래스 내의 private에 정의하여 상속형식으로 사용하여 함수를 불러올수도 있다.

private:

	int radius;
	Point Center;

	 // 클래스 내의 함수에서 전부 Point 함수를 상속받아 사용할 수 있음.


public:

	Circle(int x, int y, int r):Center(x,y) {

		radius = r;
	}

	void ShowCircleInfo() const {

		cout << "반지름 : " << radius << endl;
		Center.ShowPointInfo();

	}

};

class Ring {

private : 
	Circle Cir1;
	Circle Cir2;



public :

	Ring(int inX, int inY, int inr, int outX, int outY, int outR) : Cir1(inX,inY,inr),Cir2(outX,outY,outR) {

	
	}

	void ShowRingInfo() const {

		cout << "inner Circle Info : " << endl;
		Cir1.ShowCircleInfo();
		cout << "outter Circle Info : " << endl;
		Cir2.ShowCircleInfo();

 	}

};


int main (void){

	Ring ring (1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();


	return 0;




}