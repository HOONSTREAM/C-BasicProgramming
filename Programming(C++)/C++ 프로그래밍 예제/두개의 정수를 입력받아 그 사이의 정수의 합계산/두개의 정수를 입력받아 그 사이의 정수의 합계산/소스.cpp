#include <iostream>

int main(void) {

	int val1, val2;

	int result = 0;
	std::cout << "�ΰ��� ���ڸ� �Է��Ͻÿ� :  ";
	std::cin >> val1 >> val2; // ���� ������ ���� �ʾƵ� ������ ������ ���� ������ �����ϴ�. (std::cin<<)

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result = +i;
	}


	std::cout << "�� �� ������ ������ �� :  " << result << std::endl; // std::cout �� ����� �����ϰ� std::endl�� ����, result�� ���� 
	// C�� ġ�� printf("�μ� ������ ������ �� : %d ",result); �� �ȴ�.

	return 0;

	}
	
