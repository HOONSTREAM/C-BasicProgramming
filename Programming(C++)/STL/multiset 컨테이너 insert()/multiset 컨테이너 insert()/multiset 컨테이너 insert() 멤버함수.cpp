/*multiset�� insert()�� key(����)�� �ߺ����� �� �� �ֱ� ������ setó�� ������ġ�� ���� �������� bool ���� ��ȯ�ϴ� pair��ü�� �ƴ�
����� ��ġ���� ����Ű�� �ݺ��ڸ� ��ȯ�Ѵ�.*/

#include <iostream>
#include <set>
using namespace std;

int main() {

	multiset<int> ms;

	

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);

	multiset<int>::iterator iter = ms.begin();

	cout << " iter�� ���� : " << *iter << endl;

	for (auto& elem : ms)
		cout << elem << " ";
	cout << endl;

	return 0;

}