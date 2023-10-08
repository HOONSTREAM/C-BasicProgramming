#ifndef __POINT_H_
#define __POINT_H_

class Point {

private : // �������� : �ٸ� Ŭ�������� ������� ������ �Ұ����ϵ��� �����ϴ°�.
	
	int x;
	int y;

public :

	Point(const int &xpos,const int &ypos); //������ , bool InitMembers(int xpos, int ypos) 
	int GetX() const; // �� �Լ��������� ��������� ���� ���������ʰڴٴ� �ǹ�
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);

};

#endif

