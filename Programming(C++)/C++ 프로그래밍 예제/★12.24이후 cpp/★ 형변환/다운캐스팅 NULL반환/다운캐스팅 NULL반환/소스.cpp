#include <iostream>
using namespace std;

class SoSimple {

public:
	virtual void ShowSimpleInfo() {
		cout << "SoSimple Base class " << endl;

	}
};

class SoComplex : public SoSimple {

public:
	void ShowSimpleInfo() {

		cout << "Socomplex Derived class" << endl;

	}
};

int main(void) {

	SoSimple* simptr = new SoSimple;
	SoComplex* comptr = dynamic_cast<SoComplex*>(simptr);

	if (comptr == NULL)
		cout << "형 변환 실패" << endl;

	else
		comptr->ShowSimpleInfo();


	return 0;

}