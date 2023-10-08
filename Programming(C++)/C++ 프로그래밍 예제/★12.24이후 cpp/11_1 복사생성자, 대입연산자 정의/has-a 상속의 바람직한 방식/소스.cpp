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

		if (bnum > 0)
			pistol = new gun(bnum);
		

		else
			pistol = NULL;

	}

	police(police& copy) :handscuffs(copy.handscuffs) {

		if (copy.pistol!=NULL) {
			pistol = new gun(*copy.pistol); //gun�� ��������� ȣ��, ����������� ������ ������ �������� �� ��ü�� ������ �;���.
			//copy.pistol�� �ּҰ��̰� , ������ ��������(�� ��ü�� ��������) �� ��ü �״�� (*copy.pistol)�� ���;��Ѵ�.
		}

		else
			pistol = NULL;
	}

	police& operator=(const police& ref) {

		if (pistol != NULL)
			delete pistol;

		if (ref.pistol != NULL) {

			pistol = new gun(*(ref.pistol));
		}

		else
			pistol = NULL;


		handscuffs = ref.handscuffs;

		return *this;

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
	police man2 = man1;
	man2.PutHandscuffs();
	man2.shot();

	police man3(2, 4);
	man3 = man1;
	man3.PutHandscuffs();
	man3.shot();


	return 0;

}