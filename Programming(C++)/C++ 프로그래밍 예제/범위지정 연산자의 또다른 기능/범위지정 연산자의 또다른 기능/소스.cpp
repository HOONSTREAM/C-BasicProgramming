#include<iostream>

int val = 100;

int SimpleFunc(void) {

	int val = 20;
	val += 3;

	return val;
}

int main(void) {

	std::cout << SimpleFunc() << std::endl;
	std::cout << ::val << std::endl;

	::val += 7;

	std::cout << ::val << std::endl;



	return 0;

}