#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {

	return 3 < right - left;

}

int main(void) {

	vector<int> v = { 40,46,12,80,10,47,30,55,90,53 };

	cout << "[v ����] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	sort(v.begin(), v.end(), Pred);


	cout << "[v ����] : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	if (binary_search(v.begin(), v.end(), 32, Pred)) //!Pred(30,32)&&!Pred(32,30) �� true �̹Ƿ� , 30�� ���� 32�� �������� �ִ� �����̴�.
		cout << "32 ���Ұ� �����մϴ�." << endl;
	else
		cout << "32 ���Ұ� �������� �ʽ��ϴ�." << endl;

	if (binary_search(v.begin(), v.end(), 35, Pred)) //!pred(*p,35)&&!pred(35,*p)�� �����ϴ� ���Ұ� ����. 35 ���Ҵ� �������� �ʴ´�.
		cout << "35���Ұ� �����մϴ�." << endl;
	else
		cout << "35���Ұ� �������� �ʽ��ϴ�.";


	return 0;

	
}