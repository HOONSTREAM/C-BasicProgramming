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

		if (bnum > 0)
			pistol = new gun(bnum);
		

		else
			pistol = NULL;

	}

	police(police& copy) :handscuffs(copy.handscuffs) {

		if (copy.pistol!=NULL) {
			pistol = new gun(*copy.pistol); //gun의 복사생성자 호출, 복사생성자의 인자인 참조로 받으려면 그 자체로 가지고 와야함.
			//copy.pistol은 주소값이고 , 참조로 받으려면(그 자체로 받으려면) 그 자체 그대로 (*copy.pistol)로 들고와야한다.
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
	police man2 = man1;
	man2.PutHandscuffs();
	man2.shot();

	police man3(2, 4);
	man3 = man1;
	man3.PutHandscuffs();
	man3.shot();


	return 0;

}