#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v1(5); // 0���� �ʱ�ȭ �� size�� 5�� �����̳�
	v1.push_back(10); // 0�� �̾� 10 �߰�
	v1.push_back(20);// 10�� �̾� 20 �߰�
	v1.push_back(30);// 20�� �̾� 30�߰�
	v1.push_back(40);
	v1.push_back(50);

	
	v1.pop_back();



	return 0;

}