// ����ڷκ��� �� 5���� ������ �Է¹޾Ƽ�, �� ���� ����ϴ� ���α׷��� �ۼ�
#include <iostream>

int main(void) {

	int a, b, c, d, e;

	std::cout << "ù ��° ���� �Է� :  ";
	std::cin >> a;

	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> b;

	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> c;

	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> d;

	std::cout << "�ټ� ��° ���� �Է� : ";
	std::cin >> e;

	int result = a + b + c + d + e; // C���� �������� ������ ���� ���� �����ؾ��ϴ� �ݸ� C++�� �Լ� ���� �������� ������ �����ϴ�.

	std::cout << "�հ� :  " << result << std::endl;


	return 0;


}