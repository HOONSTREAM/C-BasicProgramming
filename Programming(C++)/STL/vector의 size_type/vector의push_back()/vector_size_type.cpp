#include <iostream>
#include <vector>
using namespace std;
/*size()�� unsigned int Ÿ���� ��ȯ�ϹǷ� i�� unsigned int�� ��ȯ�ص� ������, vector ����
typedef�� ��������� ����ϴ� ���� ����.
vector�� size_type�� ������ ������ []������ ���� index�� ����ϴ� ������ typedef�� ��� �����̴�.*/
int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;


	cout << typeid(vector<int>::size_type).name() << endl;


	return 0;



}