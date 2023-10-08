/*�������� ��� ���Ҹ� �����Ϸ��� for_each() �� transform() �˰����� Ȱ���� �� ������ �Լ���(����)�� ����ؾ��ϹǷ� �������� �����ҿ� ���ؼ�
������ ���ϰų� ������� ���ҿ� ������ �����ؾ� �Ѵٸ� ��ġ �˰����� ���� �� �� �����ϰ� ó���� �� ����.*/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	int temp1 = accumulate(v.begin(), v.end(), 0); //�ʱ갪 0���� �����ؼ� [v.begin(),v.end()) �������� �����Ҹ� ����
	int temp2 = accumulate(v.begin(), v.end(), 100); // �ʱ갪 100�� ���Ͽ� ��� �������� ���Ҹ� ����

	cout << "�ʱ갪 0 ���� temp1 : " << temp1 << endl;
	cout << "�ʱ갪 100�� ���� temp2 :" << temp2 << endl;


	return 0;



}