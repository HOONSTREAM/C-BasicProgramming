/*merge�� �պ����� ����Լ� �̴�.*/
#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);

	//�պ������� �ϱ����� �����̳ʳ��� ���Ĺ���� ���ƾ��Ѵ�. greater(��������), ����Ʈ(less,��������)

	lt2.push_back(60);
	lt2.push_back(35);
	lt2.push_back(25);

	auto iter = lt1.begin();

	cout << "lt1 : ";
	for (; iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "=============================" << endl;

	//lt2�� lt1�� �պ�����

	lt1.merge(lt2, greater<int>());

	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}

