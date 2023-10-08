#include <iostream>

int main(void)
{

	int num = 20;
	std::cout << "Hello World!" << std::endl; // std::cout << "출력대상" ;
	std::cout << "Hello " << "World!" << std::endl; //std::cout << "출력대상1" << "출력대상 2" << std::endl 
	std::cout << num << ' ' << 'A'; // 개행이없음. std:endl 은 개행임.
	std::cout << ' ' << 3.14 << std::endl;

	

	return 0;


}