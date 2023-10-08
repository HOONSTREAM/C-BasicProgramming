#include <iostream>
using namespace std;

class simpleclass {

private :
	int num1;
	int num2;

public:

	simpleclass(int num)  {

		num1 = num;
		num2 = 7;

		cout << "생성자가 호출되었음" << endl;
}

	void showData() const {

		cout << "num1 : " << num1 << endl;
		cout << "num2 : " << num2 << endl;

	}
};

int main(void) {

	simpleclass sc1(100);
	sc1.showData();


	
	return 0;


}