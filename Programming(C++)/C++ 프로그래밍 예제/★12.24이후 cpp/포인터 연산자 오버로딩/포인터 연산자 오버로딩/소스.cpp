#include<iostream>
using namespace std;

class Number {

private :

	int num;

public :

	Number(int n) :num(n) {}
	void showData() { cout << num << endl; }

	Number* operator->() {

		return this;

	}

	Number& operator*() {

		return *this;

	}
};

int main(void) {

	Number num(20);
	num.showData();

	(*num) = 30;
	num->showData();

	(*num).showData();

	return 0;

}