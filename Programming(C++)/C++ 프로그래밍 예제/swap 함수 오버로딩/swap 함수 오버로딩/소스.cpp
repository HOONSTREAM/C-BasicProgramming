// 함수 오버로딩을 이용하여 두개의 정수,문자,실수 를 입력받아 큰 수 부터 출력
#include <iostream>
void swap(int *a, int *b) { //정수 교환 함수
	int temp;

		temp = *a;
		*a = *b;
		*b = temp;

	}

void swap(char* c, char* d) { // 문자 교환 함수 (문자 교환 방식?)

	char temp;
	temp = *c;
	*c = *d;
	*d = temp;

}
void swap(double* k, double* f) { // 실수 교환 함수 

	double temp;
	temp = *k;
	*k = *f;
	*f = temp;

}


int main(void) 
	{
	int a, b; // 정수형 변수 정의

	std::cout << "첫번째 정수 입력 :  ";
	std::cin >> a;

	std::cout << "두번째 정수 입력 :  ";
	std::cin >> b;

	if (a < b) {


		swap(&a, &b);
	}


	std::cout << a << ' ' << b << std::endl;


	char c, d;

	std::cout << "첫번째 문자 입력 :  ";
	std::cin >> c;
	
	std::cout << "두번째 문자 입력 : ";
	std::cin >> d;

	if (c < d) {

		swap(&c, &d);

	}

	std::cout << c << ' ' << d << std::endl;



	double k, f;

	std::cout << "첫 번째 실수 입력 :  ";
	std::cin >> k;

	std::cout << "두 번째 실수 입력 :  ";
	std::cin >> f;


	if (k < f) {

		swap(&k, &f);

	}

	std::cout << k << ' ' << f << std::endl;


		return 0;

	}





