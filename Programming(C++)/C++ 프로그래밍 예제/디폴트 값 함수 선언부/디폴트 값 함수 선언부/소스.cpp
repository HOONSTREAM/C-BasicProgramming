#include<iostream>

int BoxVolume(int length, int width = 1, int height = 1); // ù��° �Ű��������� ����Ʈ ���� �������� �ʾ����Ƿ�,
// BoxVolume �Լ��� ȣ���� ������ �ݵ�� �ϳ� �̻��� ���ڰ��� �����ؾ߸� �Ѵ�.
// ���ڴ� �׻� ���ʿ��� ���������� ���� �����ϱ⶧����, �κ� ����Ʈ�� ������ ������������ ����Ǿ�� �Ѵ�.


int main(void) {

	std::cout << "[3, 3, 3]  : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] :  " << BoxVolume(5, 5) << std::endl; // ���ڴ� ���ʺ��� ä������, ������ �κ��� ����Ʈ ���� ����ϰ� �ȴ�.
	std::cout << "[D, D, D] :  " << BoxVolume() << std::endl; //��� �Ű������� ����Ʈ ���� ������ ���� �ƴϱ⶧����, ������ ������ �̾�����.



	return 0;

}


int BoxVolume(int length, int width, int height) {

	return length * width * height;

}
