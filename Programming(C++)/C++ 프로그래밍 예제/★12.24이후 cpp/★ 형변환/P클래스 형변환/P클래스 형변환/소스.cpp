#include <iostream>
using namespace std;

class SoSimple {

public :
	virtual void ShowSimpleInfo() {
		cout << "SoSimple Base class " << endl;

	}
};

class SoComplex : public SoSimple {

public :
	void ShowSimpleInfo() {

		cout << "Socomplex Derived class" << endl;

	}
};

int main(void) {

	SoSimple* simptr = new SoComplex;
	SoComplex* comptr = dynamic_cast<SoComplex*>(simptr);
	comptr->ShowSimpleInfo();

	return 0;

}