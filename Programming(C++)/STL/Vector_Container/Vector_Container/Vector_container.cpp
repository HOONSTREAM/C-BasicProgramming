#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	// int Ÿ�� (����)�� �����ϴ� �����̳� v�� �����Ѵ�.

	vector<int> v;

	v.push_back(10); // v�� ���� 10 �߰�
	v.push_back(20); // v�� ���� 20 �߰�
	v.push_back(30); // v�� ���� 30 �߰�
	v.push_back(40); // v�� ���� 40 �߰�

	for (unsigned int i = 0; i < v.size(); ++i)
		cout << v[i] << endl; //v[i]�� i��° index�� ���� ��ȯ

	return 0;

}