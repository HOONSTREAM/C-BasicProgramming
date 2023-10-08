#include<iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(void) {

	Rectangle rec(7000, 231, 5, 5); // 객체생성 따로하고 init에 대입하는것과 차이가 있음. 
	rec.ShowRecInfo();

	return 0;

}