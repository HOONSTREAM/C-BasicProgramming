#include <iostream>

int main(void) {

	char name[100];
	char lang[200];

	std::cout << "�̸� �Է� :  ";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����Դϱ�? :  ";
	std::cin >> lang;
	
	std::cout << "�� �̸���" << name << "�Դϴ�." << std::endl;
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;


	return 0;

}