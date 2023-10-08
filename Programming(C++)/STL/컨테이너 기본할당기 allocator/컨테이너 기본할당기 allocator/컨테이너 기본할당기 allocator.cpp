#include <iostream>
#include <vector>
#include <set>
using namespace std;
/* ��� �����̳ʴ� ���ø� �Ű������� �Ҵ�⸦ ���ڷ� ������, �⺻�Ҵ��� allocator<T> �̸�
�����̳ʴ� ���ø� �Ű������� ����Ʈ �Ű����������� �⺻ �Ҵ�⸦ �����Ѵ�.*/

int main() {

	vector<int, allocator<int>> v; //vector�� �ι�° ���ø� �Ű������� �Ҵ�⸦ ���ڷ� �޴´�.

	v.push_back(10);

	cout << *v.begin() << endl;

	set<int, less<int>, allocator<int>> s; //set�� ����° ���ø� �Ű������� �Ҵ�⸦ ���ڷ� �޴´�. �ι�°�� ���ı���, ù��°�� ���尴ü Ÿ���̴�.

	s.insert(10);
	cout << *s.begin() << endl;

	return 0;



}