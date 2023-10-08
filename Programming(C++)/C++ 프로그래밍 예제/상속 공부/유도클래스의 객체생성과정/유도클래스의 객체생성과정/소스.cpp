#include <iostream>
using namespace std;

class SoBase {

private :

	int basenum;

public :
	SoBase() :basenum(20) {

		cout << "SoBase()" << endl;

	}

	SoBase(int n) : basenum(n) {

		cout << "SoBase(int n)" << endl;

	}

	void ShowData() const {

		cout << basenum << endl;

	}
};

class SoDerived : public SoBase {

private : 
	int derivNum;

public :
	SoDerived() :derivNum(30) {

		cout << "SoDerived()" << endl;

	}

	SoDerived(int n) :derivNum(n) {

		cout << "SoDerived(int n)" << endl;

	}

	So
};