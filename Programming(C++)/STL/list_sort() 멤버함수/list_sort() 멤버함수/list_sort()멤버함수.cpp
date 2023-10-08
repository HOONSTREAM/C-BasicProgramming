/*list �����̳ʴ� sort() �˰����� ����� �� ����. (��κ� quick sort�� �����Ǿ)
�������ٹݺ��ڸ� �����ϴ� �����̳�(vector,deque)�� ����� �� ������ list�� ��ü���� 
sort () ����Լ��� �����Ѵ�.*/

#include <iostream>
#include <list>
using namespace std;

int main(void) {

	list<int> lt;

	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);

	auto iter = lt.begin();

	for (; iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(); // �������� (less) ����

	for (iter=lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;


}