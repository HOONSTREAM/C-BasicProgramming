/*�����̳� ���� �Ŀ��� assign() ����Լ��� Ȱ���ϸ� �ϰ������� ���� �Ҵ� �� �� �ִ�. ��� ������ �����̳ʴ�
assign() �Լ��� �����Ѵ�.*/

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	vector<int> v (5, 1); // �ʱⰪ 1�� 5�� size �����̳� ����

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;


	v.assign(7,1);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;

	v.assign(5, 2);
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl; //capacity �� �����ʴ´�.


	return 0;

}