#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin(); //���ۿ��Ҹ� ����Ű�� �ݺ���
	cout << iter[0] << endl; //[]������
	cout << iter[1] << endl;
	cout << iter[2] << endl; // iter[i] i��° ���ҿ� ����(������)�Ѵ�.
	cout << endl;

	iter += 2; // iter�� 2��ŭ �̵��Ѵ�. ; ���������� �ٲ��. iter[0]�� 30�̵ǰ�, iter[3]�̻��� ������ �� ����.
	cout << *iter << endl;
	cout << endl;
	cout << iter[0] << endl;
	cout << iter[1] << endl;
	cout << iter[2] << endl;
	//cout << iter[3] << endl;
	cout << endl;

	vector<int>::iterator iter2 = iter + 2; //iter���� 2��ŭ �� �̵��� ���Ҹ� iter2 �ݺ��ڿ� ����
	cout << *iter2 << endl;


	return 0;

}