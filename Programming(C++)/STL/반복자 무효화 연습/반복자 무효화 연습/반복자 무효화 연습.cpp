#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void) {

	list<int> v;

	v.push_back(1);
	v.push_back(2);
	auto iter = v.begin(); //1�� ����ų ���� 
	
	cout << "����Ʈ�� iter : " << *iter << endl; //���� ����Ű�� �ִ� �� 1

	
	v.push_back(3);

	cout << "����Ʈ�� iter : " << *iter << endl; 
	cout << "������ 1�� ����Ű�� �ִ�. " << endl;
	//��尡 ������ �ǹǷ� iter�� ������ 1�� ����Ű�� �ִ�.

	//=======================================================================
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	auto viter = v1.begin();

	cout << "������ viter : " << *viter << endl;
	cout << "capacity : " << v1.capacity() << endl; //capacity�� 2�̹Ƿ� ���� push_back���� �޸� ���Ҵ��� �߻���.
	//�ݺ��� ��ȿȭ�� ��.

	v1.push_back(3);

	

	cout << "viter : " << *viter << endl; // ������ �� ����.

	return 0;



}  