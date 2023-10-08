#include <iostream>
#include <map>
using namespace std;

int main() {

	//key, value ��� �������� �����̳� ����, �⺻ ���ı��� less, ��������

	map<int, int> m;

	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));

	pair<int, int> pr(9, 50);

	m.insert(pr);

	auto iter = m.begin();
	for (auto& elem : m)
		cout << "(" << elem.first << "," << elem.second<< ")" << " ";
	cout << endl;


	//�ݺ��ڴ� -> �����ڰ� �����ε� �Ǿ� �����Ƿ� ������ó�� ����� ->�����ڷ� ������ �� �ִ�.
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << iter->first << " " << iter->second << " ";
	cout << endl;

	return 0;
}