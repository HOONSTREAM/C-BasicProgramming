// ������� �޿� ��� ���α׷��� �ۼ��Ѵ�.
#include <iostream>

int main(void) {

	int base = 50;
	int k; // �̹��� �Ǹ� ����
	int bonus; // ���� ���� ���� (�⺻�� + ��ǰ �Ǹ� ������ 12%)
	for (;;) {
		std::cout << "�̹��� �Ǹ� �ݾ��� �Է��Ͻÿ�, ( �ܿ��� ���� ���� ), -1�� �Է��ϸ� ���α׷��� �����մϴ�. :  ";
		std::cin >> k;
		if (k < 0) {
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			break;

		}
		bonus = base + (k * 0.12);
		std::cout << "�̹� �� �޿� : " << bonus << " ����" << std::endl;
		
	}
	return 0;

	}



