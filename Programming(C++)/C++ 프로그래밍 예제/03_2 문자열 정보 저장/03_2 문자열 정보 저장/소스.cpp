//문자열 저장과 출력하는 프로그램을 구현
#include <iostream>
#include <string>
using namespace std;

class Printer {

private :
	string a; // 문자열 저장
	



public:
	void SetString();
	void ShowString();

};

void Printer::SetString() {

	cout << "문자열을 입력하시오 : ";
	getline(cin, a);




}

void Printer::ShowString() {

	cout << a << endl;

}

int main(void) {

	Printer pnt;

	pnt.SetString();
	pnt.ShowString();


	return 0;

}


