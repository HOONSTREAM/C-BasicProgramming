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

		cout << "����մϴ�." << endl;
		bullet--;

	}
};

class police {
private :
	int handscuffs;
	gun* pistol; //gun Ŭ������ ����Լ� ȣ�Ⱑ�� (ŸŬ����,�ܺ� �����Լ� ��� ����)

public :
	police(int bnum, int hcnum) :handscuffs(hcnum) {

		if (bnum > 0) {
			pistol = new gun(bnum);
		}

		else
			pistol = NULL;

	}

	void PutHandscuffs() {
		
		cout << "������ ä��ϴ�." << endl;
		handscuffs--;
	}

	void shot() {

		if (pistol == NULL) {
			cout << "���� �����ϴ�." << endl;

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