//DefaultValue3.cpp ���� 31�������� ������ ����Ʈ���� �ƴ� �Լ� �����ε����� �籸���Ѵ�.
#include <iostream>

int BoxVolume(int a) {

	int b = 1; // b=Width
	int c = 2; // c=height
	int d;

	d = a * b * c;

	return d;

}

int BoxVolume(int a, int b) {

	int c = 1; // c=height
	int d;

	d = a * b * c;

	return d;

}

int BoxVolume(int a, int b, int c) {

	int d;

	d = a * b * c;

	return d;
}



int main(void) {

	int a, b, c;



	std::cout << "���̸� �Է��Ͻÿ� : ";
	std::cin >> a;


	std::cout<<"������ " << BoxVolume(a) << "�Դϴ�." << std::endl;



	std::cout << "���̿� ���� �Է��Ͻÿ� :  ";
	std::cin >> a >> b;

	
	std::cout << "������ " << BoxVolume(a, b) << std::endl;



	std::cout << "����,��,���̸� �Է��Ͻÿ� :  ";
	std::cin >> a >> b >> c;

	std::cout << "������ " << BoxVolume(a, b, c) << std::endl;



	return 0;


}