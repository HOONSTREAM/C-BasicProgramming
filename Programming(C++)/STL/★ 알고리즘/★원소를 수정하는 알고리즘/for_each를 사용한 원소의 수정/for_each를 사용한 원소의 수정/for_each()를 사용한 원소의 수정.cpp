/*for_each(b,e,f)�� ���� [b,e)�� �ݺ��ڰ� p��� f(*p)�� �����մϴ�. for_each()�˰����� ��¸Ű�����(out parameter)�� ����մϴ�.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//��� �Ű������� ����ϱ� ���ؼ� &(���۷���)�� ����Ͽ���.

void Func(int& r) {

	r += 5;

}
int main(void) {


	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	for_each(v.begin(), v.end(), Func);

	cout << "for_each() algorithm �� ������ v ���� ";

	
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;

}