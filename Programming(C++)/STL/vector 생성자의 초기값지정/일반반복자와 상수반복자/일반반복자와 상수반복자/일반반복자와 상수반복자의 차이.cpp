/*�ݺ��ڰ� ����Ű�� ���� ���Ҹ� ������ ���� ������, ����ݺ��ڸ� ����Ͽ� �����͸� �б��������� �����ϰ� ��밡��.*/
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

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl;
	cout << *citer << endl;

	cout << *++iter << endl;
	cout << *++citer << endl; // ����ݺ��ڵ� �̵��� ����. 

	*iter = 100;
	//*citer = 100; ����ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ����.


	cout << *iter << endl;

	return 0;



}