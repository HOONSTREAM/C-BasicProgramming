#include<iostream>

int simpleFunc(int a = 10)
{

	return a + 1;

}

int simpleFunc(void) {

	
	return 10;

}


int main(void) {



	simpleFunc();
}