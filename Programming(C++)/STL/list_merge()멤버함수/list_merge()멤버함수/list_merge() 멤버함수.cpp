/*splice�� �����̾ƴ�, �ܼ��� �ݺ��� �������� �̾���̱��̸� merge�� �� list �����̳ʿ� �־
�պ��Ͽ� �����Ѵ�. (����(less)/����(greater)����)*/
/*����Ʈ�� less �̸�, greater<int>�� ���ڷ� ������ �������� �����Ѵ�.*/
#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(25);
	lt2.push_back(35);
	lt2.push_back(60);

	auto iter = lt1.begin();
	cout << "lt1 : ";
	for (; iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 :";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt1.merge(lt2);
	//lt2�� lt1���� �պ��ؼ� �����Ѵ�. ������ less

	cout << "lt1 : ";
	for (iter=lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 :";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}