#ifndef __POINT_H_
#define __POINT_H_

class Point {

private : // 정보은닉 : 다른 클래스에서 멤버변수 접근이 불가능하도록 설계하는것.
	
	int x;
	int y;

public :

	Point(const int &xpos,const int &ypos); //생성자 , bool InitMembers(int xpos, int ypos) 
	int GetX() const; // 이 함수내에서는 멤버변수의 값을 변경하지않겠다는 의미
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);

};

#endif

