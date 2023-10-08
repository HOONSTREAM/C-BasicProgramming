/*�������� ��� ���ҿ� ����� ������ �����Ϸ��� �Ϲ������� for_each() �˰����� ����մϴ�. �� �˰�����
���Ҹ� ���������ʴ� �˰���� ���Ҹ� �����ϴ� �˰��� �� �з��� ��� ���Ե˴ϴ�.
for_each(b,e,f) �� ���� [b,e)�� �ݺ��ڰ� p��� f(*p)�� ȣ���մϴ�. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int n) {

	cout << n << " ";

}

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for_each(v.begin(), v.begin() + 2, Print); //Ŭ���̾�Ʈ
	cout << endl;
	for_each(v.begin(), v.begin() + 4, Print);
	cout << endl;
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	return 0;

}