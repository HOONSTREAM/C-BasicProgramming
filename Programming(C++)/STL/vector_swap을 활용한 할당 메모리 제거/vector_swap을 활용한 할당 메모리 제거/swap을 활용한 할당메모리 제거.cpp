/*clear ����Լ��� ����ص� , capacity�� �������� �ʰ� �����Ѵ�. �� �޸� ���� �߻��Ѵ�.
�Ҵ�� �޸𸮸� ��� �����ϴ� ������ �ӽð�ü�� capacity 0�� �����̳ʸ� �����Ͽ� ��ȯ�ϴ� �Լ��� ����Ѵ�.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int>v(5);
	
	cout << "size : " << v.size() <<" "<< "capacity : " << v.capacity() << endl;

	vector<int>().swap(v); //�⺻�����ڷ� ���� vector �����̳ʿ� v �����̳ʸ� swap �Ѵ�.


	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;

	return 0;

}