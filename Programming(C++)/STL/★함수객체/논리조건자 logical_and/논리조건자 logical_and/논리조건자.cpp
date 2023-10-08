#include <iostream>
#include <functional>
using namespace std;

template<class T>
struct Logical_and : public binary_function<T, T, bool> {

	bool operator() (const T& left, const T& right) const {

		return left && right;
	}
};

int main(void) {

	int n = 30;
	logical_and<bool> oAnd;

	cout << oAnd(greater<int>()(n, 10) ,less<int>()(n, 50)) << endl; // 10<n<50 �ΰ� ?�Ϲ��� ȣ��
	cout << oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl; // ����� ȣ��
	cout << Logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50)); // �ӽð�ü�� ����� �Լ� ȣ��


	return 0;



}