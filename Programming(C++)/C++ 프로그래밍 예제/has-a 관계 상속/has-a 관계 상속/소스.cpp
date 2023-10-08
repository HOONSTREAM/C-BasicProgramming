#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class gun {

private :
	int bullet; //장전된 총알의 수

public :
	gun(int bnum) : bullet(bnum) {}

	void shot() {

		cout << "사격합니다." << endl;
		bullet--;

	}

	void gunInfo() {
		
		cout << "남은 총알의 갯수 : " << bullet << endl;
	}
};

class police :public gun {

private :
	int handscuffs;

public :
	police(int pbnum, int hcnum) : gun(pbnum), handscuffs(hcnum) {}

	void puthandscuff() {

		cout << "수갑을 채웁니다." << endl;
		handscuffs--;

	}

	void handscuffsinfo() {

		cout << "수갑의 남은 갯수 : " << handscuffs << endl;

	}

};

int main(void) {

	police p1 (5, 3);
	p1.puthandscuff();
	p1.shot();
	p1.gunInfo();
	p1.handscuffsinfo();


	return 0;

}