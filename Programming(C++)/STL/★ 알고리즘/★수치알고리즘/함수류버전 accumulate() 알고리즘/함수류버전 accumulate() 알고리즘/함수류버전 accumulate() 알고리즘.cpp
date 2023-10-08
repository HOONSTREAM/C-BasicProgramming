/*�������� ��� ���Ҹ� �����Ϸ��� for_each() �� transform() �˰����� Ȱ���� �� ������ �Լ���(����)�� ����ؾ��ϹǷ� �������� �����ҿ� ���ؼ�
������ ���ϰų� ������� ���ҿ� ������ �����ؾ� �Ѵٸ� ��ġ �˰����� ���� �� �� �����ϰ� ó���� �� ����.*/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


template<class T>
struct Plus {

	T operator() (const T& left, const T& right) {

		return left + right;

	}
};
int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	//����� �Լ��� �� ����

	cout << accumulate(v.begin(), v.end(), 0, Plus<int>()) << endl;
	//���ø� multiplies �� ����
	cout << accumulate(v.begin(), v.end(), 1, multiplies<int>());









	return 0;

}