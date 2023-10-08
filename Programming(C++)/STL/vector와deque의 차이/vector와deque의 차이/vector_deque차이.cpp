#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void) {

	vector<int> v(4, 100); //100���� �ʱ�ȭ �� size 4�� �����̳� ����
	deque<int> dq(4, 100); //100���� �ʱ�ȭ �� size 4�� deque ����

	v.push_back(200);
	dq.push_back(200);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << " ";
	cout << endl;

	return 0;

	/*v�� dq�� size�� ����� ������, ���ο� ���Ұ� �߰��Ǹ� v�� �޸� ����� ���Ҵ� �ϰ� ���� ���Ҹ� ���� ��
	���ο� ���Ҹ� �߰��Ѵ�. (��������) ->reserve�� capacity�� �����Ͽ� �����̳��� ���� �� ���� �ִ�.
	

	dq�� ���ο� �޸� ����� �Ҵ��ϰ� ���ο� ���Ҹ� �߰��Ѵ�.*/
}