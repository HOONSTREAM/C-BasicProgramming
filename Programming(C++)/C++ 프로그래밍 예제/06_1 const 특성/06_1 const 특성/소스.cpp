#include <iostream>
using namespace std;

class Sosimple
{
private : 
	int num;

public : 
	Sosimple(int n) : num(n) {}

	Sosimple& addNum(int n) {

		num += n;

		return *this;   //https://blog.naver.com/kyed203/220147095822
	}

	void ShowData() const {

		cout << "num : " << num << endl;

	}

};

int main(void)
{

	const Sosimple obj(7);
	
}

