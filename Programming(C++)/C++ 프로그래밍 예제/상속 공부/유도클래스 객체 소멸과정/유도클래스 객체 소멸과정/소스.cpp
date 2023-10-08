#include <iostream>
using namespace std;

class SoBase {

private : 
	int baseNum;

public :

	SoBase() :baseNum(20) {

		cout << "soBase void 생성자 호출" << endl;

	} //void 생성자, 유도클래스에서 명시적으로 기초클래스 생성자를 이니셜라이저를 통해서 명시하지 않으면,
	//void 생성자가 호출된다.
 	
	SoBase(int n) : baseNum(n) {

		cout << "SoBase (int n) 호출" << endl;

	}

	void ShowBaseData() const {

		cout << baseNum << endl;

	}
};

class SoDerived : public SoBase {

private :
	int derivNum;

public :
	SoDerived() : derivNum(30) {

		cout << "SoDerived() 호출" << endl;

	}

	SoDerived(int n) : derivNum(n) {

		cout << "SoDerived (int n) 호출" << endl;

	}

	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) {

		cout << "SoDerived (int n1, int n2) 호출" << endl;

	}

	void showDeriveData() const {

		cout << derivNum << endl;

	}

};


int main(void) {

	cout << "case 1 ------------" << endl;
	SoDerived dr1;
	dr1.showDeriveData();

	cout << "-------------------------" << endl;
	cout << "case 2 -----------------------" << endl;

	SoDerived dr2(12);
	dr2.showDeriveData();

	cout << " --------------------- " << endl;
	cout << " case 3 ---------------" << endl;

	SoDerived dr3(23, 24);
	dr3.showDeriveData();


	return 0;




}