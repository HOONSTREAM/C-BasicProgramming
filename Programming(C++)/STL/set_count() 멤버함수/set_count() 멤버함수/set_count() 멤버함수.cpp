/*������ ������ȯ, ����ð��� �α׽ð����⵵*/
/*set�� ���� �ߺ��� �Ұ��ϹǷ� count ����Լ��� Ȱ�뼺�� ����.*/
#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(20);

	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "���� 50�� ���� : " << s.count(50) << endl;
	cout << "���� 100�� ���� : " << s.count(100) << endl;

	return 0;


}