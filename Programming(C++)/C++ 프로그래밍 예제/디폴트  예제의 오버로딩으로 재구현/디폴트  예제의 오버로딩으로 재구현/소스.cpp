//DefaultValue3.cpp 교재 31페이지의 예제를 디폴트값이 아닌 함수 오버로딩으로 재구현한다.
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



	std::cout << "길이를 입력하시오 : ";
	std::cin >> a;


	std::cout<<"볼륨은 " << BoxVolume(a) << "입니다." << std::endl;



	std::cout << "길이와 폭을 입력하시오 :  ";
	std::cin >> a >> b;

	
	std::cout << "볼륨은 " << BoxVolume(a, b) << std::endl;



	std::cout << "길이,폭,높이를 입력하시오 :  ";
	std::cin >> a >> b >> c;

	std::cout << "볼륨은 " << BoxVolume(a, b, c) << std::endl;



	return 0;


}