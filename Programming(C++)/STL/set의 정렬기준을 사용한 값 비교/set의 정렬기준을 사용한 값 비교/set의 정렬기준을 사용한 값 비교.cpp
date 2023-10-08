/*���������̳��� ã�� ���� ����Լ��� key(����)�� ã�� �� ==������ ������� �ʴ´�. ���ı��������ڸ� �̿��ؼ� ã�⿬���� ������.
������� set�� ���ı����� less��� less�� < ������ �����ϹǷ� ���ϴ� �� ���Ұ� !(a<b)&&!(b<a) ��� �� ���Ҵ� ����(equivalence) ��� �Ǵ��Ѵ�.
set �����̳��� ���ı����� ��ȯ�ϴ� ����Լ��� key_comp() �̹Ƿ� ���ϴ� �� ���� a,b�� !s.key_comp()(a,b)&&!s.key_comp()(b,a)��� �� ���Ҵ� ����.*/

//��, ���� �������� a�� b���� �ռ����� �ʰ� b�� a���� �ռ����� �ʴٸ�, a�� b�� ���ٰ� �Ǵ��Ѵ�.

#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int, less<int>> s;

	cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl;
	cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl;


	return 0;


}