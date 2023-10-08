#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class gun {

private :
	int bullet;

public :
	gun(int bnum) :bullet(bnum) {}

	void shot() {

		cout << "사격합니다." << endl;
		bullet--;

	}
};

class police {
private :
	int handscuffs;
	gun* pistol; //gun 클래스의 멤버함수 호출가능 (타클래스,외부 메인함수 모두 가능)

public :
	police(int bnum, int hcnum) :handscuffs(hcnum) {

		if (bnum > 0) {
			pistol = new gun(bnum);
		}

		else
			pistol = NULL;

	}

	void PutHandscuffs() {
		
		cout << "수갑을 채웁니다." << endl;
		handscuffs--;
	}

	void shot() {

		if (pistol == NULL) {
			cout << "총이 없습니다." << endl;

		}
		else
			pistol->shot();

	}

	~police() {
		
		if (pistol!=NULL) {

			delete[]pistol;
		}
	}
};

int main(void) {

	police man1(5, 3);
	man1.shot();
	man1.PutHandscuffs();

	return 0;

}