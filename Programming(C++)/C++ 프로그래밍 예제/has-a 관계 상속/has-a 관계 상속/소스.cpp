#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class gun {

private :
	int bullet; //������ �Ѿ��� ��

public :
	gun(int bnum) : bullet(bnum) {}

	void shot() {

		cout << "����մϴ�." << endl;
		bullet--;

	}

	void gunInfo() {
		
		cout << "���� �Ѿ��� ���� : " << bullet << endl;
	}
};

class police :public gun {

private :
	int handscuffs;

public :
	police(int pbnum, int hcnum) : gun(pbnum), handscuffs(hcnum) {}

	void puthandscuff() {

		cout << "������ ä��ϴ�." << endl;
		handscuffs--;

	}

	void handscuffsinfo() {

		cout << "������ ���� ���� : " << handscuffs << endl;

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