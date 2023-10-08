#include <iostream>
using namespace std;

void Divide(int num1, int num2) {

	try {

		if (num2 == 0) 
			throw 0;
		
		cout << "¸ò : " << num1 / num2 << endl;
		cout << "³ª¸ÓÁö : " << num1 % num2 << endl;
	}

	catch (int expn) {

		cout << "first catch" << endl;
		throw;

	}
}

int main(void) {

	try {

		//Divide(4, 0);
		Divide(5, 4);

	}

	catch (int expn)
	{

		cout << "seceond Catch" << endl;
	}

	return 0;

}