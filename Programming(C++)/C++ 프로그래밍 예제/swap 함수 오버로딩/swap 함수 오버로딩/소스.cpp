// �Լ� �����ε��� �̿��Ͽ� �ΰ��� ����,����,�Ǽ� �� �Է¹޾� ū �� ���� ���
#include <iostream>
void swap(int *a, int *b) { //���� ��ȯ �Լ�
	int temp;

		temp = *a;
		*a = *b;
		*b = temp;

	}

void swap(char* c, char* d) { // ���� ��ȯ �Լ� (���� ��ȯ ���?)

	char temp;
	temp = *c;
	*c = *d;
	*d = temp;

}
void swap(double* k, double* f) { // �Ǽ� ��ȯ �Լ� 

	double temp;
	temp = *k;
	*k = *f;
	*f = temp;

}


int main(void) 
	{
	int a, b; // ������ ���� ����

	std::cout << "ù��° ���� �Է� :  ";
	std::cin >> a;

	std::cout << "�ι�° ���� �Է� :  ";
	std::cin >> b;

	if (a < b) {


		swap(&a, &b);
	}


	std::cout << a << ' ' << b << std::endl;


	char c, d;

	std::cout << "ù��° ���� �Է� :  ";
	std::cin >> c;
	
	std::cout << "�ι�° ���� �Է� : ";
	std::cin >> d;

	if (c < d) {

		swap(&c, &d);

	}

	std::cout << c << ' ' << d << std::endl;



	double k, f;

	std::cout << "ù ��° �Ǽ� �Է� :  ";
	std::cin >> k;

	std::cout << "�� ��° �Ǽ� �Է� :  ";
	std::cin >> f;


	if (k < f) {

		swap(&k, &f);

	}

	std::cout << k << ' ' << f << std::endl;


		return 0;

	}





