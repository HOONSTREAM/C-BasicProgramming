#include <iostream>
using namespace std;

class SoBase {

private : 
	int baseNum;

public :

	SoBase() :baseNum(20) {

		cout << "soBase void ������ ȣ��" << endl;

	} //void ������, ����Ŭ�������� ��������� ����Ŭ���� �����ڸ� �̴ϼȶ������� ���ؼ� ������� ������,
	//void �����ڰ� ȣ��ȴ�.
 	
	SoBase(int n) : baseNum(n) {

		cout << "SoBase (int n) ȣ��" << endl;

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

		cout << "SoDerived() ȣ��" << endl;

	}

	SoDerived(int n) : derivNum(n) {

		cout << "SoDerived (int n) ȣ��" << endl;

	}

	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) {

		cout << "SoDerived (int n1, int n2) ȣ��" << endl;

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