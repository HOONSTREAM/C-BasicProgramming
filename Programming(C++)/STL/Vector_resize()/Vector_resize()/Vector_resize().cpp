/*resize() ����Լ��� �̿��Ͽ� �����̳��� size�� ������ �� �ִ�. size�� Ű�ﶧ capacity�� �þ����,
size�� ���� ���� capacity�� ���� �ʴ´�.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v(5);

	v[0] = 10;
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	v.resize(10,100); // �⺻�� 100���� �ʱ�ȭ �� size�� 10�� �����̳ʷ� Ȯ��
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	v.resize(5);
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << "capacity : " << v.capacity() << endl;

	return 0;

}