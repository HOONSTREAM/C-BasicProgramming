#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find_end() �����ڹ���
bool Pred(int left, int right) {

	return left <= right;
}

int main() {

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);
	v1.push_back(80);

	vector<int> v2;

	v2.push_back(10);
	v2.push_back(15);
	v2.push_back(25);

	auto iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);

	if (iter != v1.end())
	{
		//��ġ�ϴ� �������������� ù ���� �ݺ��� iter
		//[v2.begin(),v2.end()) �� �������� [v1.begin(),v1.end())�� �������� ���Һ��� ��� ũ�ų� ���� (<=) ������ ������ ã���ϴ�.
		//������ �������� ���Ұ� 10,11,12 �� �������̹Ƿ� iter�� 10�� ����Ű�� �ݺ��ڰ� �˴ϴ�.

		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;

		return 0;


	}
}