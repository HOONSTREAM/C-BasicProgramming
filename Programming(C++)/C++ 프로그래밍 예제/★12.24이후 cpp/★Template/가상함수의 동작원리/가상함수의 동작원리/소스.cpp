#include <iostream>
using namespace std;

class AAA {

private :
	int num1;

public :
	virtual void Func1() {
		cout << "Func1" << endl;
	}
	virtual void Func2() {
		cout << "FUNC2" << endl;
	}

};

class BBB : public AAA {

private :
	int num2;
public :
	virtual void Func1() {
		cout << "BBBÀÇ Func1" << endl;
	}
	virtual void Func2() {
		cout << "BBBÀÇ Func2" << endl
			;
	}

};

int main(void) {

	AAA* aptr = new BBB;

	aptr->Func1();

	return 0;
}
