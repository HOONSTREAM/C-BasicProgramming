#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class EException {

private:
	int exp;

public:
	EException(int except) : exp(except) {} //생성자 정의

	void ShowExceptionReason() {

		cout << "예외 메세지 : " << exp << "는 입력이 불가합니다. 양의 정수로만 입력하세요. " << endl;

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