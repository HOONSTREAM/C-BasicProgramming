#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class EException {

private:
	int exp;

public:
	EException(int except) : exp(except) {} //������ ����

	void ShowExceptionReason() {

		cout << "���� �޼��� : " << exp << "�� �Է��� �Ұ��մϴ�. ���� �����θ� �Է��ϼ���. " << endl;

	}

};


class PrintFunctor {

private :

	char fmt;

public :
	PrintFunctor(char c = ' ') :fmt(c) {};

	void operator() (int n) const {

		cout << n << fmt;
	}
};

int main() {
	
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for_each(v.begin(), v.end(), PrintFunctor());
	for_each(v.begin(), v.end(), PrintFunctor(','));
	cout << endl;

	for_each(v.begin(), v.end(), PrintFunctor('\n'));



	return 0;



	

}