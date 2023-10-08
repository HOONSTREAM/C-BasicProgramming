//���������� ������ ���� n�� <�̻�!!> �����ϰ� �ݺ��Ǵ��� ã������ �˰��� 
//������ f(*iter,ã�°�)�� ���� ���� n�� ������ ù ������ �ݺ��ڸ� ��ȯ�Ѵ�.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {

	return abs(right - left) <= 5;
	//30���� ���� 5�����ΰ�
}

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(32);
	v.push_back(28);
	v.push_back(33);
	v.push_back(40);
	v.push_back(50);
	
	auto iter = search_n(v.begin(), v.end(), 3, 30, Pred); //30���� ���� 5�����ΰ��� 3������ �ִ°��� ù���� �ݺ��ڸ� ��ȯ

	if (iter != v.end())

		cout << "iter : " << *iter << endl;
	cout << "iter+1 : " << *(iter + 1) << endl;
	cout << "iter-1 : " << *(iter - 1) << endl;

	return 0;


}