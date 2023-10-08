/*�߿��� �����Դϴ�.  
 vector<int> :: iterator iter �������� vector�� const�� ���ǵǸ� ������ �̵��� �Ұ����ϸ�, �ݺ��ڿ� const�� ������
 ������ ������ �Ұ��������ϴ�. ���� �� const�� ���ǵǸ� �̵�,���� �Ѵ� �Ұ��������ϴ�.*/
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;
	int arr[5] = { 10,20,30,40,50 };


	v.push_back(10);
	v.push_back(20); 
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin();
	int* p = arr;
	cout << *iter << " , " << *p << endl; //iter�� *pó�� �����Ѵ�.

	vector<int>::const_iterator citer = v.begin();
	const int* cp = arr;
	cout << *citer << " , " << *cp << endl; //citer�� cpó�� �����Ѵ�. 

	const vector<int>::iterator iter_const = v.begin();
	int* const p_const = arr;
	cout << *iter_const << " , " << *p_const << endl; // iter_const�� p_const ó�� ����

	const vector<int>::const_iterator citer_const = v.begin();
	const int* const cp_const = arr; // citer_const�� cp_constó�� ����
	cout << *citer_const << " , " << *cp_const << endl;

	return 0;

}