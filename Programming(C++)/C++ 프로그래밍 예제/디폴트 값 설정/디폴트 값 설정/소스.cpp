//����Ʈ �� ����
#include<iostream>

int Adder(int num1=5, int num2=7) // �Ű������� ����Ʈ��(default)�� ����, ���ڸ� �������� ���� ��, num1�� 5�� num2�� 7�� ���޵� ������ �����ϴ°�.
{

	return num1 + num2;

}


int main(void) {

	
	std::cout << Adder() << std::endl; // ���ڰ��� �����Ƿ� ����Ʈ�� 5,7�� Adder �Լ��� ���޵ȴ�.
	std::cout << Adder(1) << std::endl; // ù��° �Ű������� 1�� ������ ��. �ι�° �Ű������� ����Ʈ�� 7�� �ݿ��Ǿ� 8�� ��������� ���´�.
	std::cout << Adder(3, 5) << std::endl; // �Ű����� 1 : 3 , �Ű����� 2 : 5






	return 0;

}