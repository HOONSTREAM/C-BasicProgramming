/*splice�� �ٸ���������, list �����̳� ��ü�� ���ٺ��̴� ���� �ƴ�, �ݺ��ڰ� ����Ű�� ���Ҹ�
�߶� ���̰ų� list�� �������� �߶���̴� ����*/
/*������ϱ� : �ߴ��� ���� �� F5�� �����Ͽ� F10�� �����鼭 ��� �ٿ��� �������� Ž��.*/
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

	lt2.push_back(100);
	lt2.push_back(200);
	lt2.push_back(300);
	lt2.push_back(400);
	lt2.push_back(500);

	//list<int>::iterator iter1;
	//list<int>::iterator iter2;
	auto iter1 = lt1.begin();
	auto iter2 = lt2.begin();



	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
		cout << *iter2 << " ";
	cout << endl;

     //iter1 = lt1.begin(); -> for���� ���� �ڿ� iter1�� end�� ����Ű�� �����Ƿ� begin()�� �ٽ� ���ش�. 
	 // �׷��� auto�� ����ϸ� �޸� ���� ������ �߻��Ѵ�.
	 //iter2 = lt2.begin();
	++iter1;
	++iter1; //30�� ����Ŵ
	++iter2; //200�� ����Ŵ
	
	//iter1�� ����Ű�� ��ġ��, iter2�� ����Ű�� ��ġ�� lt2�� ���Ҹ� �߶����
	lt1.splice(iter1, lt2, iter2);

	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
		cout << *iter2 << " ";
	cout << endl;

	cout << "================================" << endl;

	//lt1.end()�� ����Ű�� ��ġ��, ������[lt2.begin(),lt2.end())�� ���ٺ���
	lt1.splice(lt1.end(),lt2,lt2.begin(), lt2.end());


	cout << "lt1 : ";
	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
		cout << *iter1 << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
		cout << *iter2 << " ";
	cout << endl;

	return 0;


}
