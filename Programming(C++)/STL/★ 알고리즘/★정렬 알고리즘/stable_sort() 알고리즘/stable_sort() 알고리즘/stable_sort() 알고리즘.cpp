/*sort() �˰����� �� ���� �� ������� �ϸ� �ſ� ���� ����ӵ��� �ڶ��ϴ� ���Ĺ���̴�. stable_sort()�� ��������(�պ�����)�� ������� �ϸ� �޸𸮸� �˳��ϴٸ� O(Nlog2N)���⵵�� �����Ѵ�.
partial_sort()�˰����� �� ������ ������� �Ѵ�.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Greater(int left, int right) {

	return left > right;
}
int main(void) {

	vector<int> v = { 30,50,30,20,40,10,40 };


	cout << "v [���� ��] :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	stable_sort(v.begin(), v.end());

	cout << "v [���� less] :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	stable_sort(v.begin(), v.end(), Greater);

	cout << "v [���� ����� Greater] :";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;

}