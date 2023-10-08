//�������� Ư�� ������ ä����� �Ѵٸ� fill(), fill_n() �˰����� ����մϴ�. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	fill(v.begin(), v.end(), 0); // ����[v.begin(),v.end()) �� 0���� ��� ä��

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	fill_n(v.begin(), 3, 55); // [v.begin(),v.begin()+3)�� ������ 55�� ä��
	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	return 0;


}