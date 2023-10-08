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

class Circle { //�Լ��� ���ԵǴ� ���� ���� Ŭ������ ������ �����ؼ� �Լ��� �ҷ��ü��� �ְ�. (�� , �� �Լ������� Ŭ������ ���� �Լ��� ����Ҽ�����)
			   // Ŭ���� ���� private�� �����Ͽ� ����������� ����Ͽ� �Լ��� �ҷ��ü��� �ִ�.

private:

	int radius;
	Point Center;

	 // Ŭ���� ���� �Լ����� ���� Point �Լ��� ��ӹ޾� ����� �� ����.


public:

	Circle(int x, int y, int r):Center(x,y) {

		radius = r;
	}

	void ShowCircleInfo() const {

		cout << "������ : " << radius << endl;
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